//programmers
//https://programmers.co.kr/learn/courses/30/lessons/12930
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
// word_cnt = 1 -> 만약 공백이면 1로 초기화. 아니면 연산 하고 ++
string solution(string s) {
    string answer = "";
    int word_cnt = 1;
    for(int i = 0; i < s.length(); i++){
        if (s[i] == ' '){
            answer += ' ';
            word_cnt = 1;
        } 
        else{
            if (word_cnt % 2 == 0){
                answer += tolower(s[i]);
                word_cnt++;
            }
            else{
                answer += toupper(s[i]);
                word_cnt++;
            }
        }
    }
    return answer;
}
