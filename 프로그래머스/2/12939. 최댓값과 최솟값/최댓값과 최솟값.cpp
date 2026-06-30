#include <string>
#include <vector>

using namespace std;


vector<string> split(string input, string delimiter)
{
    vector<string> result;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos)
    {
    	token = input.substr(0, pos);
        result.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    result.push_back(input);
    
    return result;
}

string solution(string s) {
    string answer = "";

    vector<string> split_string = split(s, " ");
    int Min_Num = stoi(split_string[0]);
    int Max_Num = stoi(split_string[0]);
    
    for(size_t i = 1; i < split_string.size(); i++)
    {
        if (Min_Num > stoi(split_string[i]))
            Min_Num = stoi(split_string[i]);
        
        if (Max_Num < stoi(split_string[i]))
            Max_Num = stoi(split_string[i]);
    }
    
    answer = to_string(Min_Num) + " " + to_string(Max_Num);
    
    return answer;
}
