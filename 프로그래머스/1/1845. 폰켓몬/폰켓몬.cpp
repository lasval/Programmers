#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> types;

    for (int num : nums)
    {
        types.insert(num);
    }

    int total_count = nums.size() / 2;

    return min(total_count, (int)types.size());
}