#include <string>
#include <vector>

using namespace std;

void AscendingSort(vector<string>& Strings, int i_Index)
{
    int i_Size = Strings.size();

    for (int i = 0; i < i_Size - 1; i++)
    {
        for (int j = 0; j < i_Size - 1 - i; j++)
        {
            int i_Num_Ascii1 = (int)(Strings[j][i_Index]);
            int i_Num_Ascii2 = (int)(Strings[j + 1][i_Index]);
            
            if (i_Num_Ascii1 == i_Num_Ascii2)
            {
                int i_Num_Ascii3; 
                int i_Num_Ascii4;
                int i_Temp_Index = 0;
                while(true)
                {
                    if (i_Temp_Index == i_Index)
                        i_Temp_Index++;
                    
                    i_Num_Ascii3 = (int)(Strings[j][i_Temp_Index]);
                    i_Num_Ascii4 = (int)(Strings[j + 1][i_Temp_Index]);
                    
                    if (i_Num_Ascii3 != i_Num_Ascii4)
                        break;
                    else
                        i_Temp_Index++;
                    
                    
                }
                
                if (i_Num_Ascii3 > i_Num_Ascii4)
                {
                    swap(Strings[j], Strings[j + 1]);
                }    
                
            }
            else{
                if (i_Num_Ascii1 > i_Num_Ascii2)
                {
                    swap(Strings[j], Strings[j + 1]);
                }    
            }
            
        }
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    
    AscendingSort(answer, n);
    return answer;
}