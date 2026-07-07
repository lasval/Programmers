#include <string>
#include <vector>

using namespace std;

int Get_NextBigNumber(int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    int temp = n;

    while ((temp & 1) == 0 && temp != 0)
    {
        zeroCount++;
        temp >>= 1;
    }

    while ((temp & 1) == 1)
    {
        oneCount++;
        temp >>= 1;
    }

    int position = zeroCount + oneCount;

    n |= (1 << position);

    n &= ~((1 << position) - 1);

    n |= (1 << (oneCount - 1)) - 1;

    return n;
}

int solution(int n) {
    int answer = Get_NextBigNumber(n);
    
    return answer;
}