//중위순회 구현
#include <stdio.h>

// 6
// 0 1 2
// 1 3 4
// 2 -1 5
// 3 -1 -1
// 4 -1 -1
// 5 -1 -1

const int MAX = 100;

struct Tree{
  int left;
  int right;
};

Tree tree[105];

void inorder(int x){
  if (tree[x].left == -1 && tree[x].right == -1){
    printf("%d ", x);
  }else{
    if (tree[x].left != -1) inorder(tree[x].left);
    printf("%d ", x);
    if (tree[x].right != -1) inorder(tree[x].right);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  int a, b, c;
  for(int i = 0; i < n; i++){
    scanf("%d %d %d", &a, &b, &c);
    tree[a].left = b;
    tree[a].right = c;
  }

  inorder(0);
  printf("\n");

  return 0;
}
