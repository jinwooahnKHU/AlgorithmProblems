//https://www.acmicpc.net/problem/11399
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 1010;
int main(){
  vector<int> myarray;
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int a;
    scanf("%d", &a);
    myarray.push_back(a);
  }
  sort(myarray.begin(), myarray.end());

  int result[MAX];
  result[0] = myarray[0];
  for(int i = 1; i < n; i++){
    result[i] = result[i-1] + myarray[i];
  }
  int cost = 0;
  for(int i = 0; i < n; i++){
    cost += result[i];
  }
  printf("%d", cost);
  return 0;
}
