#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

   unordered_map<string, int> count;

    for (const string& name : participant)
    {
        count[name]++;
    }

    for (const string& name : completion)
    {
        count[name]--;
    }

    for (const auto& pair : count)
    {
        if (pair.second != 0)
            return pair.first;
    }

    return "";
}