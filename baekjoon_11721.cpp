//https://www.acmicpc.net/problem/11721
#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  getline(cin, s);
  for(int i = 0; i < s.size(); i++){
    if (i % 10 == 9 && i != 0){
      printf("%c\n", s[i]);
    }
    else{
      printf("%c", s[i]);
    }
  }
  return 0;
}
