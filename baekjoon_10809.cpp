//10809
//https://www.acmicpc.net/problem/10809
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    char a = 'a';
    for(int i = 0; i < 26; i++){
        char next = a + i;
        bool flag = false;
        for(int j = 0; j < s.length(); j++){
            if (s[j] == next && flag == false){
                printf("%d ", j);
                flag = true;
                break;
            }
        }
        if (flag == false){
            printf("%d ", -1);
        }
    }
    return 0;
}
