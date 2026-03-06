#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int i_pCount = 0;
    int i_yCount = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if ('p' == tolower(s[i]))
        {
            i_pCount++;
        }
        else if ('y' == tolower(s[i]))
        {
            i_yCount++;
        }
    }
    
    if (i_pCount == i_yCount)
        answer = true;
    else 
        answer = false;

    return answer;
}