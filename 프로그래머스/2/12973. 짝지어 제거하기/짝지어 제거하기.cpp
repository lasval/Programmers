#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int answer = 0;
    string stack = "";
    
    for(char ch : s)
    {
        if (!stack.empty() && stack.back() == ch)
        {
            stack.pop_back();
        }
        else
        {
            stack.push_back(ch);
        }
    }
    
    answer = stack.empty() ? 1 : 0;
    
    return answer;
}