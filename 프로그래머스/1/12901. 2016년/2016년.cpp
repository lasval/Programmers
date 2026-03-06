#include <string>
#include <vector>

using namespace std;


int Cal_Date(int i_Month, int i_Day)
{
    int i_Days = i_Day;
    
    for (int i = 1; i < i_Month; i++)
    {
        if (i == 1 || i == 3 ||
            i == 5 || i == 7 ||
            i == 8 || i == 10 ||
            i == 12)
        {
            i_Days += 31;
        }
        else if (i == 2)
        {
            i_Days += 29;
        }
        else
        {
            i_Days += 30;
        }
    }
    
    return i_Days;
}

string Cal_Day(int Remain)
{
    string Day;
    
     if (Remain == 1)
    {
        Day = "FRI";
    }
    else if (Remain == 2)
    {
        Day = "SAT";
    }
    else if (Remain == 3)
    {
        Day = "SUN";
    }
    else if (Remain == 4)
    {
        Day = "MON";
    }
    else if (Remain == 5)
    {
        Day = "TUE";
    }
    else if (Remain == 6)
    {
        Day = "WED";
    }
    else
    {
        Day = "THU";
    }
    
    return Day;
}

string solution(int a, int b) {
    string answer = "";
    
    int i_Days = Cal_Date(a, b);

    answer = Cal_Day(i_Days % 7);
    
    return answer;
}