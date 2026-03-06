#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int i_Index = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            i_Index = 0;
            continue;
        }
            
        if (i_Index % 2 == 0)
        {
           s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
        
        i_Index++;
        
    }
    
    answer = s;
    
    return answer;
}