//프로그래머스 정수 삼각형 문제
#include <stdio.h>
#include <string>
#include <vector>

const int MAX=500;

using namespace std;

int d[MAX][MAX]; //해당 칸일때가 가장 큰 값
int answer, height;

int max(int a, int b){
    return a > b ? a:b;
}

int solution(vector<vector<int>> triangle) {
    // 초기값
    answer = d[0][0] = triangle[0][0];
    
    height = triangle.size();
    
    for(int i = 1; i < height; i++){
        for(int j = 0; j <= i; j++){
            if (j == 0){
                d[i][j] = d[i-1][j] + triangle[i][j];
            }
            else if (j == i){
                d[i][j] = d[i-1][j-1] + triangle[i][j];
            }
            else{
                d[i][j] = max(d[i-1][j-1], d[i-1][j]) + triangle[i][j];
            }
            
            answer = max(answer, d[i][j]);
        }
    }
    
    return answer;
}
