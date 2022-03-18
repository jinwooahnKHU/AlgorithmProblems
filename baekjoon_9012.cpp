//https://www.acmicpc.net/problem/9012

#include <stdio.h>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int n;
int main(){
    scanf("%d\n", &n);
    // cin >> n; 교훈 : cin과 getline을 연속으로 쓰지말자. 그러면 cin의 마지막 \n이 getline에 들어가버려서 getline이 스킵되어버림
    for(int i =0; i < n; i++){
        stack<int> Stack;
        string s;
        getline(cin, s);
        // cin >> s;
        int cnt = 0;
        bool flag = false;
        for(int j = 0; j < s.length(); j++){
            if (s[j] == '('){
                Stack.push(1);
            }
            else{
                if (Stack.size() == 0){ //만약 stack 내부 공간이 없는데 그러면 안되니까
                    flag = true;
                    break;
                }
                else{
                    Stack.pop();
                }
            }
        }
        if (flag == true){
            printf("NO\n");
        }
        else{
            if (Stack.size() == 0){
                printf("YES\n");
            }
            else{
            // printf("%lu\n", Stack.size());
                printf("NO\n");
            }
        }
    }
    return 0;
}

