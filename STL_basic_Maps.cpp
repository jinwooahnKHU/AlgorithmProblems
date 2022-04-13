//https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cstring>

using namespace std;

int Q, type, Y;
string X;

int main() {
    cin >> Q;
    map<string, int> temp; //정의법 map<key 자료형, value 자료형>
    for(int i = 0; i < Q; i++){
        cin >> type;
        if (type == 1){
            cin >> X >> Y;
            if (temp.find(X) == temp.end()){ //검색했을 때 없으면 end()을 return함
                temp.insert(make_pair(X, Y)); //map에 추가 : map.insert(make_pair(x, y))
            }else{
                temp[X] += Y; //값 수정
            }
        }
        else if (type == 2){
            cin >> X;
            temp.erase(X);
        }else{
            cin >> X;
            if (temp.find(X) == temp.end()){
                cout << 0 << endl;
            }
            else{
                cout << temp[X] << endl;
            }
        }
    }
    return 0;
}



