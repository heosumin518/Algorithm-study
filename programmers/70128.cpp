/**
 * @file 70128.cpp
 * @author Sumin Heo (heosumin518@gmail.com)
 * @brief 프로그래머스 - 내적 https://school.programmers.co.kr/learn/courses/30/lessons/70128
 * @date 2023-07-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <string>
#include <vector>

#include <iostream>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;

    for (int i = 0; i < a.size(); i++)
    {
        answer += a[i]*b[i];
    }

    return answer;
}

int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> b = {-3,-1,0,2};
    cout << solution(a, b) << endl;

    return 0;
}