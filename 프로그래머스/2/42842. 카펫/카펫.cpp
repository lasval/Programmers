#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int totalsize = brown + yellow;
    
    int w = 0; 
    int h = 3;
    
    while(true)
    {
        int temp_w = totalsize / h;
        int temp_h = h;
        
        if (totalsize % temp_h == 0)
        {
            if (temp_w >= h && (temp_w - 2) * (temp_h - 2) == yellow)
            {
                w = temp_w;
                break;
            }
            else
            {
                h++;   
            }    
        }
        else{
            h++;
            continue;
        }
    }
    
    answer.push_back(w);
    answer.push_back(h);
    
    return answer;
}