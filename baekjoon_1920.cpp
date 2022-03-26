//https://www.acmicpc.net/problem/1920

#include <stdio.h>
#include <algorithm>

using namespace std;
int n, m;
const int MAX = 100010;
int quest[MAX];

void binary_search(int x){
  int start = 0;
  int end = n-1;
  int mid;
  // int mid = (start + end) / 2;
  if (quest[start] > x || quest[end] < x){ //범위밖 체크
    printf("%d\n", 0);
    return;
  }
  else{
    while(end - start >= 0){
      mid = (start + end) / 2;
      
      if (quest[mid] == x){
        printf("%d\n", 1);
        return;
      }
      else if (x > quest[mid]){
        start = mid+1;
        // mid = (start + end) / 2;
      }
      else{
        end = mid-1;
        // mid = (start + end) / 2;
      }
    }
    printf("0\n");
    return;
  }
}

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &quest[i]);
  }
  sort(quest, quest+n); //quicksort

  //분할 탐색
  scanf("%d", &m);
  for(int i = 0; i < m; i++){
    int a;
    scanf("%d", &a);
    binary_search(a);
  }
  return 0;
}
