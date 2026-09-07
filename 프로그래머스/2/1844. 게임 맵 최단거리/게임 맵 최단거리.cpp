#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    
    int n = maps.size();
    int m = maps[0].size();
    
    queue<pair<int, int>> q;
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> distance(n, vector<int>(m, 0));
    
    int dy[4] = {-1, 1, 0, 0};
    int dx[4] = {0, 0, -1, 1};
    
    visited[0][0] = true;
    distance[0][0] = 1;
    q.push({0, 0});
    
    while (!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();
        
        int y = current.first;
        int x = current.second;
        
        for (int i= 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            
            if (maps[ny][nx] == 0)
                continue;
            
            if (visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            distance[ny][nx] = distance[y][x] + 1;
            q.push({ny, nx});
            
        }
    }
    
    if (distance[n - 1][m - 1] == 0)
        return -1;
    
    return distance[n - 1][m - 1];
}