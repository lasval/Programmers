#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str_Number = to_string(n);
    sort(str_Number.begin(), str_Number.end(), greater<int>());
    
    answer = stoll(str_Number);
    
    return answer;
}