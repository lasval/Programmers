#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = s;
    
    for (int i = 0; i < answer.length(); i++)
    {
        if (answer[i] == ' ')
            continue;
        
        if (answer[i] >= 'a' && answer[i] <= 'z')
        {
            if ((int)answer[i] + n > (int)'z')
            {
                int i_Temp = (int)answer[i] + n - (int)'z';                
                answer[i] = (char)((int)'a' + i_Temp - 1);
            }
            else
            {
                answer[i] = (char)((int)answer[i] + n);    
            }
            
        }
        else if (answer[i] >= 'A' && answer[i] <= 'Z')
        {
            if ((int)answer[i] + n > (int)'Z')
            {
                int i_Temp = (int)answer[i] + n - (int)'Z';                
                answer[i] = (char)((int)'A' + i_Temp - 1);
            }
            else
            {
                answer[i] = (char)((int)answer[i] + n);    
            }
        }
    }
    return answer;
}