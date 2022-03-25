//https://www.acmicpc.net/problem/1316
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <string>


using namespace std;

int n;
int main(){
  //aba 첫번째 flag = false; 
  int answer = 0;
  scanf("%d\n", &n); //줄바꿈 붙혀줘야됨
  for(int i = 0;i < n; i++){
    set<char> uos; //한단어씩 넣을것이므로 char 집합
    string s;
    getline(cin, s);
    bool flag = true;
    for(int j = 0; j < s.size(); j++){
      if (j == 0){
        uos.insert(s[j]);
      }
      else{
        if (s[j] != s[j-1]){
          if (uos.find(s[j]) != uos.end()){ //못찾으면 end()을 return함
            flag = false;
            break;
          }
          else{
            uos.insert(s[j]);
          }
        }
      }
    }
    if (flag == true) answer++;
  }

  printf("%d", answer);
  return 0;
}
