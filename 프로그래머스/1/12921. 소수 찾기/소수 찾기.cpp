#include <string>
#include <vector>
#include<math.h>
using namespace std;

int Cal_Prime(int n)
{
    int i_Prime_Count = 0;
    
    vector<bool> PrimeList;
    PrimeList.resize(n);
        
    PrimeList[0] = false;
    PrimeList[1] = false;

    for (int i = 2; i <= n; i++)
    {
        PrimeList[i] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (PrimeList[i] == false)
            continue;
        
        for (int j = 2; i * j <= n; j++)
        {
            PrimeList[i * j] = false;
        }
    }
    
    for (int i = 0; i <= n; i++)
    {
        if(PrimeList[i] == true)
            i_Prime_Count++;
    }
    
    return i_Prime_Count;
    
}

int solution(int n) {
    int answer = 0;
    answer = Cal_Prime(n);
    return answer;
}