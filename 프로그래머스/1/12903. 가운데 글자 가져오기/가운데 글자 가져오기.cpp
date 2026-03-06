#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int i_Length = s.length();
    
    if (i_Length % 2 == 0)
    {
        answer = s[i_Length / 2 - 1 ];
        answer += s[i_Length / 2];
    }
    else 
    {
        answer = s[i_Length / 2];
    }
    
    return answer;
}