#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string get_binary(int n)
{
    string binary = "";

    while (n != 0)
    {
        binary += to_string(n % 2);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

vector<int> solution(string s) {
    vector<int> answer;
    string binary = s; 
    int cycle_count = 0;
    int total_zero_count = 0;
    int cur_zero_count = 0;
    
    while(true)
    {
        // 1차로 0 제거
        for(char c : binary)
        {
            if (c == '0'){
                cur_zero_count++;    
                total_zero_count++;
            } 
        }

        // 2차로 0제거후 길이로 이진 변환
        binary = get_binary(binary.length() - cur_zero_count);
        cur_zero_count = 0;
        cycle_count++;

        // 3차로 1인지 체크하고 다시 루프인지 아닌지 체크
        if(binary == "1")
            break;
    }
    
    answer.push_back(cycle_count);
    answer.push_back(total_zero_count);
    
    return answer;
}