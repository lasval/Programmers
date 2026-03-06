#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    string str_Number = to_string(n);
    
    for (int i = 0; i < str_Number.length(); i++)
    {
        answer += (int)str_Number[i] - (int)'0';
    }

    return answer;
}