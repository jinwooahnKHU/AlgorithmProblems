//1152
//https://www.acmicpc.net/problem/1152
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

const int MAX= 1000000;
int main(){
    string s;
    getline(cin, s);
    if (s[0] == ' '){
        s = s.substr(1, s.size());
    }
    int cnt = 0;
    vector<string> result;
    string buffer;
    istringstream iss(s);
    char delimeter = ' ';

    while(getline(iss, buffer, delimeter)){
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
