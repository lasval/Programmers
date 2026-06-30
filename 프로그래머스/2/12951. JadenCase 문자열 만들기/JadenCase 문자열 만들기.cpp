#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = s;
    
    bool first_Ch = true;
    
    for (char& Ch : answer) {
        if (first_Ch && Ch != ' ')
        {
            if (Ch >= 'a' && Ch <= 'z')
            {
                Ch = toupper(Ch);
            }
            first_Ch = false;
        }
        else if (!first_Ch && Ch != ' ')
        {
            if (Ch >= 'A' && Ch <= 'Z')
            {
                Ch = tolower(Ch);
            }
        }
        else if (!first_Ch && Ch == ' ')
        {
            first_Ch = true;
        }
            
    }
    
    return answer;
}