//Implementation of QuickSort

#include <stdio.h>
//Quick sort
//비균등분할
//1. pick one unit(pivot) in array
//2. move left which elements smaller than pivot
//3. sort left list except pivot. sort right list except pivot
//4. repeat

//input
//10
//2 5 3 4 8 7 -1 9 10 2
int const MAX = 100000;

int getLeft(int arr[], int start, int end, int pivot, int result[]){
  //push smaller value than pivot to result
  int inx = 0;
  for(int i = start; i <= end; i++){
    if (arr[i] <= pivot){
      result[inx++] = arr[i];
    }
  }
  return inx;//마지막으로채워진 다음 inx
}

int getRight(int arr[], int start, int end, int pivot, int result[]){
  int inx = 0;
  for(int i = start; i <= end; i++){
    if (arr[i] > arr[pivot]){
      result[inx++] = arr[i];
    }
  }
  return inx;
}

void quickSort(int arr[], int start, int end){
  if (start >= end){
    return;
  }
  else{
    int pivot = arr[start];
    int left[MAX], right[MAX];
    int left_cnt = getLeft(arr, start+1, end, pivot, left); //start is pivot -> start+1
    int right_cnt = getRight(arr, start+1, end, pivot, right);
    //copy phase : [left pivot right]
    for(int i = 0; i < left_cnt; i++){
      arr[start+i] = left[i];
    }
    arr[start+left_cnt] = pivot;

    for(int i= 0; i < right_cnt; i++){
      arr[start + left_cnt + 1 + i] = right[i];
    }

    quickSort(arr, start, start+left_cnt-1);
    quickSort(arr,start+left_cnt+1, end);
  }
}
int main(){
  int n;
  scanf("%d", &n);
  int arr[MAX];

  for(int i = 0; i < n;i++){
    scanf("%d", &arr[i]);
  }
  quickSort(arr, 0, n-1);

  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
