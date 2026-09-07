#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    int size = begin.length();
    
    string start_word = begin;
    
    queue<pair<string, int>> qWord;
    vector<bool> visited(words.size(), false);

    qWord.push({begin, 0});
    
    while(!qWord.empty())
    {
        pair<string, int> current = qWord.front();
        qWord.pop();
        
        string word = current.first;
        int count = current.second;
        
        if (word == target)
            return count;
        
        for (int i = 0; i < words.size(); ++i)
        {
            if (visited[i])
                    continue;
            
            int diff = 0;

            for (int j = 0; j < word.length(); ++j)
            {
                if (word[j] != words[i][j])
                    diff++;
            }

            if (diff == 1)
            {
                visited[i] = true;
                qWord.push({words[i], count + 1});                
            }
        }

    }
    
    
    return answer;
}