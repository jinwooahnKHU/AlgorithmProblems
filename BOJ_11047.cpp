//https://www.acmicpc.net/status?user_id=96bluechip&problem_id=11047&from_mine=1

#include <iostream>

using namespace std;
int n, k;
int value[12];

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++){
    scanf("%d", &value[i]);
  }
  //k보다 작은 최대의 숫자 배열을 찾아
  //4200 / 1000 
  // k값을 줄여나가..
  // k , k / value (개수 추가), k % value (나머지)
  // value가 k보다 크다 -> 줄여
  //k가 0이 될 때 까지 반복
  int answer = 0;
  //시작 index
  int idx = 0;
  for(int i = 0 ;i < n; i++){
    if (value[i] >= k){
      idx = i;
      break;
    }
    else if (value[i] > k){
      idx = i-1;
      break;
    }
  }
  //다 돌았는데 k보다 큰 수가 없으면 가장 큰 수로 한다
  idx = n-1;
  
  while(k != 0){
    if (value[idx] > k){
      idx--;
      continue;
    }
    answer += (k / value[idx]);
    k = k % value[idx];
    // printf("%d %d\n", answer, k);
  }
  printf("%d", answer);
  return 0;
}
