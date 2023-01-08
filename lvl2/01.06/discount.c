#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// want_len은 배열 want의 길이입니다.
// number_len은 배열 number의 길이입니다.
// discount_len은 배열 discount의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int change_str(char * abc)
{
    
    int sum =0;
    for(int i = 0; i < strlen(abc); i ++)
    {
        sum += abc[i];
        sum -= 96;
    }
    return sum;
}
int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) 
{
    int answer = 0;
    int want_num[330] ={0,};
    int totalneed[330] = {0,};
    char * copy;
    int numsum =0;
    for(int i= 0; i<number_len;i++)
    {
        numsum +=number[i];
    }
   
    for(int i =0 ; i< want_len; i++)
    {
        copy = strdup(want[i]);
        want_num[change_str(copy)]++;
        totalneed[change_str(copy)] = want_num[change_str(copy)] * number[i];
   
    }
    
   // printf("total ->>>>%d\n",totalneed[k]);
    for(int i =0 ; i<discount_len; i++)
    {
        int cnt =0;
        int *disc = (int *)calloc(330,sizeof(int));
        
        int reset =0;
        for(int j =i ; j < discount_len; j++)
        {
            if(reset == 10)
                break;
            copy = strdup(discount[j]);
            disc[change_str(copy)]++;
            reset++;
        }
        int k =0;
        while(k < 330)
        {
            if(totalneed[k] != 0 )
            {
              if(totalneed[k] <= disc[k])
              {  
                  cnt++;
              }
            }
            k++;
        }
       if(cnt >= number_len)
           answer++;
    }
    return answer;
}


