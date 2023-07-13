/**
 * @file 120860.cpp
 * @author Sumin Heo (heosumin518@gmail.com)
 * @brief 프로그래머스 - 직사각형 넓이 구하기 https://school.programmers.co.kr/learn/courses/30/lessons/120860
 * @date 2023-07-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <string>
#include <vector>

#include <iostream>

using namespace std;

int solution(vector<vector<int>> dots)
{
    int answer = 0;
    int width = 0, height = 0;

    width = dots[0][0];
    height = dots[0][1];

    for ( int i = 0; i < dots.size(); i++)
    {
        for(int j = i; j < dots.size(); j++)
        {
            if(dots[i][0] == dots[j][0] && i != j)
            {
                height = (dots[i][1] - dots[j][1]);
            }
            if(dots[i][0] != dots[j][0])
            {
                width = (dots[i][0] - dots[j][0]);
            }
        }
    }

    answer = width*height;

    if (answer < 0) answer *= -1;

    return answer;
}

int main()
{

    vector<vector<int>> dots = 
    {
        { 1, 1 },
        { 2, 1 },
        { 2, 2 },
        { 1, 2 }
    };

    cout << solution(dots) << endl;

    return 0;
}
