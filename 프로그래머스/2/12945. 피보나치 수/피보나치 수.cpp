#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Get_Fibonacci(int n)
{
    const int MOD = 1234567;
    
    if (n == 0)
        return 0;
    
    int prev_count = 0;
    int cur_count = 1;
    
    for (int i = 2; i <= n; ++i)
    {
        int next_count = (prev_count + cur_count) % MOD;
        prev_count = cur_count;
        cur_count = next_count;
    }
    
    return cur_count;
}

int solution(int n) {
    int answer;
    
    answer = Get_Fibonacci(n);

    return answer;
}