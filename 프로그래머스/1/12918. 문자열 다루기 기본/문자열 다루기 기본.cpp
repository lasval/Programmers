#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.length() != 4 && s.length() != 6)
    {
        answer = false;
        return answer;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= '0' && (int)s[i] <= '9')
        {
            answer = true;            
        }
        else 
        {
            answer = false;
            return answer;
        }
            
    }
    
    
    return answer;
}