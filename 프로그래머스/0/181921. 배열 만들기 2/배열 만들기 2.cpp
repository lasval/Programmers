#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int i = l; i <= r; i++)
    {
        bool b_isCheck = true;
        string str_i = to_string(i);
            
        for (int j = 0; j < str_i.length(); j++) {
            if (str_i[j] != '5' && str_i[j] != '0')
            {
                b_isCheck = false;
                break;
            }
                
        }
        
        if (b_isCheck == false)
        {
            continue;
        }
        
        answer.push_back(i);
    }
    
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    
    return answer;
}