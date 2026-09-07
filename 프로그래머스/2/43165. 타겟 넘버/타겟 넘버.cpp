#include <string>
#include <vector>

using namespace std;

int answer = 0;

void DFS(vector<int>& numbers, int target, int index, int sum, int& answer)
{
    if (index == numbers.size())
    {
        if (sum == target)
            answer++;

        return;
    }

    DFS(numbers, target, index + 1, sum + numbers[index], answer);

    DFS(numbers, target, index + 1, sum - numbers[index], answer);
}

int solution(vector<int> numbers, int target)
{

    int answer = 0;
    
    DFS(numbers, target, 0, 0, answer);

    return answer;
}