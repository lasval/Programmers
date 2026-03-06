#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if(arr.size() == 0 || arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    int i_Min_Num = 0;
    int i_Min_Index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
        {
            i_Min_Num = arr[i];
            i_Min_Index = 0;
            continue;
        }
        
        if(arr[i] < i_Min_Num)
        {
            i_Min_Num = arr[i];
            i_Min_Index = i;
        }
    }
    arr.erase(arr.begin() + i_Min_Index);
    answer = arr;
    
    return answer;
}