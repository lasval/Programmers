#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool desc (int a, int b){ 
          return a >  b;      
}                

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    vector<int> Min_Sort = A;
    vector<int> Max_Sort = B;
    sort(Min_Sort.begin(), Min_Sort.end());
    sort(Max_Sort.begin(), Max_Sort.end(), desc);
    for (size_t i = 0; i < Min_Sort.size(); i++)
    {
        answer += Min_Sort[i] * Max_Sort[i];
    }
    return answer;
}