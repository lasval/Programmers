#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    
    vector<vector<int>> map(102, vector<int>(102, 0));
    
    for (int i = 0; i < rectangle.size(); ++i)
    {
        int min_x = rectangle[i][0] * 2;
        int min_y = rectangle[i][1] * 2;
        int max_x = rectangle[i][2] * 2;
        int max_y = rectangle[i][3] * 2;

        for (int y = min_y; y <= max_y; ++y)
        {
            for (int x = min_x; x <= max_x; ++x)
            {
                map[y][x] = 1;
            }
        }
    }
    
    for (int i = 0; i < rectangle.size(); ++i)
    {
        int min_x = rectangle[i][0] * 2;
        int min_y = rectangle[i][1] * 2;
        int max_x = rectangle[i][2] * 2;
        int max_y = rectangle[i][3] * 2;

        for (int y = min_y + 1; y <= max_y - 1; ++y)
        {
            for (int x = min_x + 1; x <= max_x - 1; ++x)
            {                
                map[y][x] = 0;
            }
        }
    }
    
    queue<pair<int,int>> qPlayer;
    vector<vector<bool>> visited(102, vector<bool>(102, false));
    vector<vector<int>> distance(102, vector<int>(102, 0));
    
    int startY = characterY * 2;
    int startX = characterX * 2;
    
    qPlayer.push({startY, startX});
    visited[startY][startX] = true;
    
    int dy[4] = {1, -1, 0, 0};
    int dx[4] = {0, 0, 1, -1};
    
    while (!qPlayer.empty())
    {
        pair<int, int> PlayerPos = qPlayer.front();
        qPlayer.pop();

        int y = PlayerPos.first;
        int x = PlayerPos.second;
        
        if (y == itemY * 2 && x == itemX * 2)
        {
            return distance[y][x] / 2;
        }
        
        for (int i = 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if (ny < 0 || ny >= 102 || nx < 0 || nx >= 102)
                continue;

            if (map[ny][nx] == 0)
                continue;

            if (visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            distance[ny][nx] = distance[y][x] + 1;
            qPlayer.push({ny, nx});

        }
    }
    
    return answer;
}