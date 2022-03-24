//후위순회 구현
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

void postorder(int x){
  if (tree[x].left == -1 && tree[x].right == -1){
    printf("%d ", x);
  }else{
    if (tree[x].left != -1) postorder(tree[x].left);
    if (tree[x].right != -1) postorder(tree[x].right);
    printf("%d ", x); //전위순회랑 다르게 left, right 자식노드 다 순회 후 root node출력해주면된다.
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

  postorder(0);
  printf("\n");

  return 0;
}
