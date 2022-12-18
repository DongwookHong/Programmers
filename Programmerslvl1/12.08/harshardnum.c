#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int cnt =0;
    int num =x;
    while(num > 0)
    {
        cnt+= num %10;
        num = num /10;
    }
   
    if(x%cnt == 0)
        return answer;
    return 0;
}


int main()
{
    int a = 11;

    printf("%d",solution(a));
}