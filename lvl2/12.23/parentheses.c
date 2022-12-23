#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

int strtonum(char *str)
{
    int i =0;
    int cnt=0;
    int sum,sum2,sum3;
   
    for(int i =0 ; i < strlen(str); i++)
    {
        sum =0;
        sum2=0;
        sum3 =0;
        
        int flag =true;
        for (int j =0; j <strlen(str);j++)
        {
            int k = (i+j) %strlen(str);  
            if(str[k] == '(')
                sum +=1;
            else if(str[k] == ')')
                sum -=1;
            else if(str[k] == '{')
                sum2 +=2;
            else if(str[k] == '}')
                sum2 -= 2;
            else if(str[k] == '[')
                sum3 +=3;
            else if(str[k] == ']')
                sum3 -=3;
            
            if(sum < 0 || sum2 < 0 || sum3 < 0) 
                break;
            k++;
        }
        
        if (sum > 0 || sum2 >0 || sum3 > 0 )
            return 0;
        if(sum==0 &&sum2==0 &&sum3==0)
            cnt++;
    }
   return cnt;
}


int solution(const char* s) {
    char *copy = strdup(s);
    int cnt =strtonum(copy);

    
    return cnt;
}
