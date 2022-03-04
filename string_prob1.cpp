//c++로 문자열 푸는게 익숙치 않아 푸는 문제들
//https://programmers.co.kr/learn/courses/30/lessons/12918

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.length() == 4){
        for(int i = 0; i < 3; i++){
            if (!isdigit(s[i])){
                answer = false;
                break;
            }
        }
    }
    else answer = false;
    
    return answer;
}
