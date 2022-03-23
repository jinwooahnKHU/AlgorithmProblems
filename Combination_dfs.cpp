//Combination dfs로 구현
#include <stdio.h>
#include <vector>

const int MAX = 100;
using namespace std;
vector<int> arr;
int visit[MAX];
int n, m;

void print_combi(){
  for(int i = 0; i < arr.size(); i++){
    if (visit[i] == true){
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
}

void dfs_combi(int idx, int cnt){
  if (cnt == m){
    print_combi();
    return;
  }
  for(int i = idx; i < n; i++){
    if (visit[i] == true) continue;
    visit[i] = true;
    dfs_combi(i, cnt+1);
    visit[i] = false;
  }
}

int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    arr.push_back(i+1);
  }
  dfs_combi(0,0);
  return 0;
}
