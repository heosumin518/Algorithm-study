/**
 * @file 1688.cpp
 * @author Sumin Heo (heosumin518@gmail.com)
 * @brief 백준 문제풀이 - 지민이의 테러 https://www.acmicpc.net/problem/1688
 * @version 0.1
 * @date 2023-07-07
 * @link https://forums.codeguru.com/showthread.php?497679-To-check-if-a-point-is-inside-a-polygon
 * @link https://stackoverflow.com/questions/37703202/winding-number-algorithm-and-point-on-boundary-edge-of-convex
 * 
 * @copyright Copyright (c) 2023
 * 
 */

// 점과 교차하는 선분끼리의 the winding number 구하기
// winding number 가 0이면 점은 외부에 있다.

// #include <iostream>
// #include <vector>
// using namespace std;


// struct Point
// {
//     long long x;
//     long long y;
// };

// int Is_Left(const Point &p0,
//             const Point &p1,
//             const Point &point)
// {
//     return ((p1.x - p0.x) * (point.y - p0.y) -
//             (point.x - p0.x) * (p1.y - p0.y));
// }

// bool Is_Inside(const Point              &point,
//                 const std::vector<Point> &points_list)
// {
//     // The winding number counter.
//     int winding_number = 0;

//     // Loop through all edges of the polygon.
//     typedef std::vector<Point>::size_type size_type;

//     size_type size = points_list.size();

//     for (size_type i = 0; i < size; ++i)             // Edge from point1 to points_list[i+1]
//     {
//         Point point1(points_list[i]);
//         Point point2;

//         // Wrap?
//         if (i == (size - 1))
//         {
//             point2 = points_list[0];
//         }
//         else
//         {
//             point2 = points_list[i + 1];
//         }

//         if (point1.y <= point.y)                                    // start y <= point.y
//         {
//             if (point2.y > point.y)                                 // An upward crossing
//             {
//                 if (Is_Left(point1, point2, point) > 0)             // Point left of edge
//                 {
//                     ++winding_number;                               // Have a valid up intersect
//                 }
//             }
//         }
//         else
//         {
//             // start y > point.y (no test needed)
//             if (point2.y <= point.y)                                // A downward crossing
//             {
//                 if (Is_Left(point1, point2, point) < 0)             // Point right of edge
//                 {
//                     --winding_number;                               // Have a valid down intersect
//                 }
//             }
//         }
//     }

//     return (winding_number != 0);
// }


// int main()
// {
//     long long inputX = 0, inputY = 0;
//     unsigned int peopleNum = 3;
//     unsigned int vertexNum = 0;

//     Point p1;
//     Point p2;
//     Point p3;
//     std::vector<Point> pointList;

//     bool answer;

//     cin >> vertexNum;   // 꼭짓점의 개수를 입력받는다.

//     while(vertexNum--)  // 꼭짓점들의 좌표를 입력받는다.
//     {
//         cin >> inputX;
//         cin >> inputY;

//         pointList.push_back(Point{inputX, inputY});
//     }

//     cin >> inputX;
//     cin >> inputY;
//     p1 = {inputX, inputY};

//     cin >> inputX;
//     cin >> inputY;
//     p2 = {inputX, inputY};

//     cin >> inputX;
//     cin >> inputY;
//     p3 = {inputX, inputY};


//     answer = Is_Inside(p1, pointList);


//     cout << Is_Inside(p1, pointList) << endl;
//     cout << Is_Inside(p2, pointList) << endl;
//     cout << Is_Inside(p3, pointList) << endl;

//     return 0;
// }





// ****************************************************************************************************






// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;

// class Point {
// public:
//     long long x;
//     long long y;
    
//     Point(long long x, long long y) {
//         this->x = x;
//         this->y = y;
//     }
    
//     // 다른 Point 객체와의 비교함수. x가 작은순, x가 같다면 y가 작은 순으로 비교
//     int Compare(Point other) {
//         if (this->x < other.x) {
//             return -1;
//         } else if (this->x == other.x) {
//             if (this->y < other.y) {
//                 return -1;
//             }
//             if (this->y > other.y) {
//                 return 1;
//             }
//             return 0;
//         } else {
//             return 1;
//         }
//     }
// };

// // 방향성을 리턴하는 함수
// int CCW(Point a, Point b, Point c) {
//     int temp = a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y;
//     int result;
//     if (temp > 0) result =  1;
//     else if (temp < 0) result = -1;
//     else if (temp == 0) result = 0;
//     return result;
// }

// // 선분 2개의 교점 여부를 리턴하는 함수
// bool Judge(vector<Point> line1, vector<Point> line2)
// {
//     // 첫 번째 선분의 양 끝점
//     Point p1 = line1[0];
//     Point p2 = line1[1];

//     // 두 번째 선분의 양 끝점
//     Point p3 = line2[0];
//     Point p4 = line2[0];

//     int result1 = CCW(p1, p2, p3) * CCW(p1, p2, p4);
//     int result2 = CCW(p3, p4, p1) * CCW(p3, p4, p2);

//     return (result1 < 0) && (result2 < 0);
// }

// // 한 점이 line으로 이루어진 다각형의 변과 짝수번 만나는지, 홀수번 만나는지 리턴하는 함수
// int CrossingInclusion(Point point, vector<Point> line, int vertexNum)
// {
//     long long minX, maxX, minY, maxY;
//     int count = 0;  // 기준점과 사람의 좌표를 이루는 선분이 다각형의 변과 몇번 만나는지 체크하는 변수
    
//     for (int i = 0; i < vertexNum; i++)
//     {
//         int t1 = CCW(line[i], line[i+1], point);
//         cout << "CCW Test" << endl;
//         cout << t1 << endl;

//         // 세 점이 일직선일때
//         if (t1 == 0)
//         {
//             minX = min(line[i].x, line[i+1].x);
//             maxX = max(line[i].x, line[i+1].x);
//             minY = min(line[i].y, line[i+1].y);
//             maxY = max(line[i].y, line[i+1].y);
//             // 점이 선분의 일직선으로 내부에 있으려면 점의 x좌표와 y좌표가 모두
//             // 선분의 최대 x좌표, 최소 x좌표, 최대 y좌표, 최소 y좌표의 범위에 있어야 함

//             if ((minX <= point.x) && (point.x <= maxX))
//             {
//                 if((minY <= point.y) && (point.y <= maxY))
//                 {
//                     // 모두 만족한다면 일직선의 내부에 있음
//                     return 1;
//                 }
//             }
//         }
//     }
//     // 기준점
//     Point base = Point(1, 2147483647);

//     for (int i = 0; i < vertexNum; i++)
//     {
//         vector<Point> temp = {base, point};
//         count += Judge(temp, {line[i], line[i+1]});
//     }
//     cout << "Collision Check, Even 0, Odd 1" << endl;
//     cout << count % 2 << endl;

//     return count % 2;
// }

// int main()
// {
//     int vertexNum; 
//     int peopleNum = 3;  // 방어막 내부에 있는지 확인할 사람 수
//     long long inputX, inputY;
//     vector<int> answers;
//     vector<Point> lines;

//     // 꼭짓점 갯수 및 꼭짓점 좌표 입력
//     cin >> vertexNum; 
//     for (int i = 0; i < vertexNum; i++)
//     {
//         cin >> inputX;
//         cin >> inputY;
//         lines.push_back({inputX, inputY});
//     }

//     // 첫번째 꼭짓점을 다시 담아야 마지막 선분 처리 가능
//     lines.push_back(lines[0]);

//     while (peopleNum--)
//     {
//         cin >> inputX;
//         cin >> inputY;
//         answers.push_back(CrossingInclusion(Point(inputX, inputY), lines, vertexNum));
//     }
//     cout << "print answers" << endl;    // for Debug
//     cout << answers[0] << endl;
//     cout << answers[1] << endl;
//     cout << answers[2] << endl;

//     // for (int i = 0; i < peopleNum; i++)
//     // {
//     //     cout << "print!!!!!!!" << endl;
//     //     cout << answers[i] << endl;
//     // }


//     return 0;
// }



// ****************************************************************************************************