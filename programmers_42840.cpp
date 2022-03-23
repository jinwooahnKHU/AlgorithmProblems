//https://programmers.co.kr/learn/courses/30/lessons/42840?language=cpp
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> first = {1,2,3,4,5};
    vector<int> second = {2,1,2,3,2,4,2,5};
    vector<int> third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> result;
    int score1 = 0, score2 = 0, score3 = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if (answers[i] == first[i % first.size()]) score1++;
        if (answers[i] == second[i % second.size()]) score2++;
        if (answers[i] == third[i % third.size()]) score3++;
    }
    
    vector<int> temp = {score1, score2, score3};
    int max= 0;
    for(int i = 0; i < temp.size(); i++){
        if (temp[i] >= max){
            max = temp[i];
        }
    }
    
    for(int i = 1; i <= 3; i++){
        if (temp[i-1] == max){
            result.push_back(i);
        }
    }
    return result;
}
