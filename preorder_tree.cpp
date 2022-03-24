//전위순회
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

void preorder(int x){
  if (tree[x].left == -1 && tree[x].right == -1){
    printf("%d ", x);
  }else{
    printf("%d ", x);
    if (tree[x].left != -1) preorder(tree[x].left);
    if (tree[x].right != -1) preorder(tree[x].right);
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

  preorder(0);
  printf("\n");

  return 0;
}
