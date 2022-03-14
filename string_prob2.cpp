//https://programmers.co.kr/learn/courses/30/lessons/12925?language=cpp

#include <stdio.h>
#include <string>
#include <vector>

/*
string slicing : substr( start, end) -> start ~ end-1 까지
                 substr(start, s.length()) -> start부터 끝까지

string to int : stoi(s);
string to float : stof(f);
string to longlong : stoll(ll);
*/

using namespace std;

int solution(string s) {
    int answer = 0;
    if (s[0] == '-'){
        answer = -1 * stoi(s.substr(1, s.length()));
    }
    else if (s[0] == '+'){
        answer = stoi(s.substr(1, s.length()));
    }
    else{
        answer = stoi(s);
    }
    return answer;
}
