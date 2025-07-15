/**
 * @file 1260.cpp
 * @author Sumin Heo (heosumin518@gmail.com)
 * @brief 백준 - DFS와 BFS https://www.acmicpc.net/problem/1260
 * @date 2023-07-14
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
public:
    Graph(int numVertices);
    void AddEdge(int src, int dest);
    void DFS(int startVertex);
    void BFS(int startVertex);

private:
    int mNumVertices;
    vector<bool> mVisited;
    vector<list<int>> mAdjList;
};

Graph::Graph(int numVertices)
{
    this->mNumVertices = numVertices + 1;
    mVisited.resize(mNumVertices, false);
    mAdjList.resize(mNumVertices);
}

void Graph::AddEdge(int src, int dest)
{
    mAdjList[src].push_back(dest);
    mAdjList[dest].push_back(src);
}

void Graph::DFS(int startVertex)
{
    mVisited[startVertex] = true;
    cout << startVertex << " ";

    for (int v : mAdjList[startVertex])
    {
        if (!mVisited[v])
        {
            DFS(v);
        }
    }
}

void Graph::BFS(int startVertex)
{
    queue<int> q;

    mVisited.resize(mNumVertices, false);
    mAdjList.resize(mNumVertices);

    mVisited[startVertex] = true;
    q.push(startVertex);

    while (!q.empty())
    {
        int vertex = q.front();
        cout << vertex << " ";
        q.pop();

        for (int v : mAdjList[vertex])
        {
            if (!mVisited[v])
            {
                mVisited[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    int vertexNum = 0;
    int edgeNum = 0;
    int startVertex = 0;
    int v1 = 0, v2 = 0;

    cin >> vertexNum >> edgeNum >> startVertex;

    Graph graph(vertexNum);
    // 간선 추가
    while (edgeNum--)
    {
        cin >> v1 >> v2;
        graph.AddEdge(v1, v2);
    }

    graph.DFS(startVertex);
    cout << endl;
    graph.BFS(startVertex);

    return 0;
}
