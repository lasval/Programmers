#include <string>
#include <vector>

using namespace std;

void Ascending_Sort(vector<int>& Numbers)
{
    int i_Size = Numbers.size();

    for (int i = 0; i < i_Size - 1; i++)
    {
        for (int j = 0; j < i_Size - 1 - i; j++)
        {
            if (Numbers[j] > Numbers[j + 1])
            {
                swap(Numbers[j], Numbers[j + 1]);
            }
        }
    }
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }
    
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    else
    {
        Ascending_Sort(answer);
    }
    
    
    return answer;
}