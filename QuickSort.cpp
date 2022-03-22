//Implementation of Quicksort
//합병 정렬 구현하기

#include <stdio.h>

const int MAX = 100000;

void merging(int arr[], int s1, int e1, int s2, int e2){
  //arr의 s1 ~ e1, s2 ~ e2을 합쳐서 정렬된 결과로 만드는 함수
  
  // 1 2 4 8   3 4 6 7
  // p         q -> 이 두 개의 포인터를 둬서 p, q는 각각 왼쪽의 최솟값, 오른쪽의 최솟값이 된다.
  // 이러면 p와 q를 비교하면 된다.
  // 1 2 3 4 4 6 7 8
  //1과 3을 비교 -> 1이 내려가야함. 2와 3을 비교해서 2가 내려와야함...
  //병합 결과를 temp 배열을 만들어서 추가한다... 마지막에는 arr에 temp의 값들을 복사한다.
  
  int p, q; // p와 q : 현재 최솟값을 가리키는 변수들
  int temp[MAX]; //합쳐진 결과를 저장하는 임시변수
  int temp_inx = 0; //temp에다가 차례차례 저장해야 하기 때문에 temp의 index를 선언
  
  p = s1;
  q = s2;
  
  //언제까지 비교할 것인가? 두 나눠진 배열 중 어떤 배열에 더 이상 숫자가 없을 때
  //1 2 4 8  2 2 3 3 
  //    p            q 이럴때. q는 없으니까 p쪽 남은 것 다 넣어
  //따라서 while은 p, q 둘 다 범위안에 있을 때 로 하면 범위 어떤 것 하나가 벗어나면 끝
  while(p <= e1 && q <= e2){
    if (arr[p] <= arr[q]){
      temp[temp_inx++] = arr[p]; //더 작은 arr[p]의 값을 temp에 넣어준다.
      p++;
    }
    else{
      temp[temp_inx++] = arr[q];
      q++;
    }
  }
  
  //이제 한쪽 배열은 비어있으므로 남은 배열의 값들을 다 붙혀버리면 된다.
  if (p > e1){ //p 담은 배열이 먼저 끝나는 경우 -> q있는 배열 뒷자리부터싹 붙히면 된다.
    for (int i = q; i <= e2; i++){
      temp[temp_inx++] = arr[i];
    }
  }
  else{ //q담은 배열이 먼저 끝나는 경우 -> p있는 배열 뒷자리부터 싹 붙히면 된다.
    for (int i = p; i<= e1; i++){
      temp[temp_inx++] = arr[i];
    }
  }
  
  //temp는 완성이 되었으니
  //arr[s1 ~ e2]까지에 temp 의 값을 복사
  for(int i = s1; i <= e2; i++){
    arr[i] = temp[i-s1]; //temp은 인덱스가 0부터이므로 i - s1으로 해서 0부터 시작하도록 한다.
  }
}

void mergeSort(int arr[], int start, int end){
  //arr의 start부터 end까지를 합병정렬하는 함수
  
  if (start >= end){ //기저조건
    return;
  }
  else{
    //1. 왼쪽 절반을 합병정렬
    //2. 오른쪽 절반을 합병정렬
    //3. 둘을 합친다.
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    
    //arr[start ~ mid], arr[mid+1 ~ end]은 이미 정렬되어있음
    merging(arr, start, mid, mid+1, end);
  }
}




int main(){
  int n;
  int numbers[MAX];
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++){
    scanf("%d", &numbers[i]);
  }
  
  mergeSort(numbers, 0, n-1);
  
  for (int i = 0; i < n; i++){
    printf("%d ", numbers[i]);
  }
  
  return 0;
}
