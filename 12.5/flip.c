#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>//pow 함수 써보기 

int solution(int n) 
{
    int answer = 0;
    int len = 1;
    int div = n;

    while(div/3>0)
    {
        div /= 3;
        len++;  //len 길이구해주기
    }

    for(int i=1; i<=len; i++){
        answer += (n%3) * pow(3,len-i); //pow ( a,b) a제곱 b a^b
        n /= 3;
    }


    return answer;
}
int main()
{

    int  n =45;

    printf("%d", solution(n));
}