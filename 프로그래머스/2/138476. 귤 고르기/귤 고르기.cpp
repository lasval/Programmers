#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> boxs;
    
    for (int i = 0; i < tangerine.size(); i++)
    {
        boxs[tangerine[i]]++;
    }
    
    vector<int> tangerine_size;
    tangerine_size.reserve(boxs.size());
    
    for (auto iter = boxs.begin(); iter != boxs.end(); iter++) {
        tangerine_size.push_back(iter->second);
    }
    
    sort(tangerine_size.begin(), tangerine_size.end(), greater<int>());
    
    int Sell_Count = k;
    for (int i = 0; i < tangerine_size.size(); i++)
    {
        Sell_Count -= tangerine_size[i];
        answer++;
        
        if (Sell_Count <= 0)
        {
            break;
        }
    }
    
    return answer;
}