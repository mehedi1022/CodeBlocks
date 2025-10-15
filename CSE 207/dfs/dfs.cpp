#include<stdio.h>
#include <stack>

int V = 5;
int visited[5];
int G[5][5] = {
              {0,1,0,0,1},
              {1,0,0,1,1},
              {0,0,0,1,0},
              {0,1,1,0,1},
              {1,1,0,1,0}
          };

void DFS(int v)
{
    std::stack<int> S;

    visited[v] = 1;
    printf("%d ", v);
    S.push(v);

    while(!S.empty())
    {
        int current = S.top();
        S.pop();
        for(int j=0; j<V; j++)
        {
            if(G[current][j]==1 && visited[j]==0)
            {
                visited[j] = 1;
         printf("%d ", j);
                S.push(j);
            }
        }
    }
}
int main()
{
    DFS(0);
}