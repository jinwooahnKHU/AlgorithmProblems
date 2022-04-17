//https://rosseta-ds.tistory.com/127

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int MAX = 25;
int board[MAX][MAX];
int house_cnt;
bool visited[MAX][MAX];
int dy[4] = {-1, 1, 0, 0}; //u, d, l, r
int dx[4] = {0, 0, -1, 1};
int n;
vector<int> vec;

//해당 좌표 점이 들어왔을 때, 그 점 기준으로 dfs 돌기
void dfs(int y, int x){
  visited[y][x] = true;
  house_cnt++;
  //(i, j) 점에서 4방향으로 돌면서 확인
  for(int k = 0; k < 4; k++){
    int ny = y + dy[k];
    int nx = x + dx[k];
    //만약 다음 값이 over되는 경우면 continue
    if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
    if (visited[ny][nx] == false && board[ny][nx] == 1){
      dfs(ny, nx);
    }
  }
  
  
}
int main(){
  scanf("%d\n", &n);
  for(int i = 0; i < n; i++){
    string temp;
    getline(cin, temp);
    // cin >> temp;
    for(int j = 0; j < n; j++){
      board[i][j] = temp[j] - '0';
    }
  }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if (visited[i][j] == false && board[i][j] == 1){
        house_cnt = 0; //초기화
        dfs(i, j);
        vec.push_back(house_cnt);
      }
    }
  }
  
  sort(vec.begin(), vec.end());
  cout << vec.size() << endl;
  for(int i = 0; i < vec.size(); i++){
    cout << vec[i] << endl;
  }
  return 0;
}
