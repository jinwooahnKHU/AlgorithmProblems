// dfs with no recursion, using stack

#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;
const int MAX = 100;
int n, m;
//without recursion
/*
input
9 12
1 2
1 3
2 3
2 4
2 6
3 7
4 5
4 7
4 8
5 6
7 8
8 9
*/
// answer 1 2 3 7 4 5 6 8 9
bool visited[MAX];
stack<int> Stack;
vector<int> mygraph[MAX];

void dfs(int x){
    Stack.push(x);
    visited[x] = true;
    printf("%d ", x);
    
    while(!Stack.empty()){
        int current = Stack.top();
        Stack.pop();
        // printf("%d ", current);
        for(int i = 0; i < mygraph[current].size(); i++){
            int next = mygraph[current][i];
            if (visited[next] == false){
                printf("%d ", next);
                visited[next] = true;
                Stack.push(current);
                Stack.push(next);
                break; //이거 안하면 틀림
            }
        }
    }
}


int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        mygraph[a].push_back(b);
        mygraph[b].push_back(a);
    }

    dfs(1);
    return 0;
}
