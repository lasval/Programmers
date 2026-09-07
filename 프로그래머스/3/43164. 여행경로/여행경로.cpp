#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool DFS(vector<vector<string>>& tickets, string current, vector<bool>& visited, vector<string>& answer)
{
    if (answer.size() == tickets.size() + 1)
        return true;
    
    for (int i = 0; i < tickets.size(); ++i)
    {
        if(tickets[i][0] != current)
            continue;
            
        if (visited[i])
            continue;

        visited[i] = true;
        answer.push_back(tickets[i][1]);

        if(DFS(tickets, tickets[i][1], visited, answer))
            return true;
        
        answer.pop_back();
        visited[i] = false;
    }
    
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    
    sort(tickets.begin(), tickets.end());
    
    vector<bool> visited(tickets.size(), false);

    answer.push_back("ICN");

    DFS(tickets, "ICN", visited, answer);
    
    return answer;
}