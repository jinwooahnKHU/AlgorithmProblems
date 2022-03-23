//순열을 dfs로 구현
#include <stdio.h>
#include <vector>

const int MAX = 100;
using namespace std;
vector<int> arr;
vector<int> result;
int visit[MAX];
int n, m;

void print_permu(){
  for(int i = 0; i < result.size(); i++){
    printf("%d ", result[i]);
  }
  printf("\n");
}

void dfs_permu(int cnt){
  if (cnt == m){
    print_permu();
    return;
  }
  for(int i = 0; i < n; i++){
    if (visit[i] == true) continue;
    visit[i] = true;
    result.push_back(arr[i]);
    dfs_permu(cnt+1);
    result.pop_back();
    visit[i] = false;
    
  }
}
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    arr.push_back(i+1);
  }
  dfs_permu(0);
  return 0;
}
