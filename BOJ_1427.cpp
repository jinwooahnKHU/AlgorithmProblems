//https://www.acmicpc.net/problem/1427

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  string s;
  getline(cin, s);

  sort(s.begin(), s.end(), greater<>());

  cout << s << endl;
  return 0;
}
