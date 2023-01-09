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
    
    int sum =1;
    for(int i = 0; i < strlen(abc); i ++)
    {
        sum *= (abc[i]-96);
        //sum *= i;
    }
    sum %=10000;
  //  printf("sum -> %d\n",sum);
    return sum;
}
int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) 
{
    int answer = 0;
    int want_num[1000000] ={0,};
    int totalneed[1000000] = {0,};
    char * copy;
   
    for(int i =0 ; i< want_len; i++)
    {
        copy = strdup(want[i]);
        want_num[change_str(copy)]++;
         totalneed[change_str(copy)] = want_num[change_str(copy)] * number[i];
   
    }
    printf ("\n");
   // printf("total ->>>>%d\n",totalneed[k]);
    for(int i =0 ; i<=discount_len -10; i++)
    {
        int cnt =0;
        int *disc = (int *)calloc(1000000,sizeof(int));
        
      
        for(int j =i ; j < i + 10; j++)
        {
           
            copy = strdup(discount[j]);
            disc[change_str(copy)]++;
           
        }
        int k =0;
        while(k < 1000000)
        {
            if(totalneed[k] != 0 )
            {
              if(totalneed[k] == disc[k])
                  cnt++;
             else 
                 break;
            }
            k++;
        }
       if(cnt == number_len)
           answer++;
    }
    return answer;
}
