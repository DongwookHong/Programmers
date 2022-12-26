#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// fees_len은 배열 fees의 길이입니다.
// records_len은 배열 records의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int numtoi(const char *str,int st, int end)
{
    int result;
    for(int i = st; i <=end ; i ++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            result *=10;
            result += str[i] - '0';
        }
    }
    return (result);
}
 
int* solution(int fees[], size_t fees_len, const char* records[], size_t records_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int hour,min,carnum;
    char car[10000]={0,};
    int in_time[10000] ={0,};
    int total_time[10000]= {0,};
    int cnt;
    for(int i = 0 ; i < records_len ; i++)
    {
        hour = numtoi(records[i],0,1);
        min = numtoi(records[i],3,4);
        carnum = numtoi(records[i], 6 , 9);
        if(records[i][11] == 'I')
        {
            car[carnum] += 1;
            in_time[carnum] = (hour * 60) + min;
            if(in_time[carnum] == 0)
                in_time[carnum] = -2;
        }
        if (records[i][11] == 'O')
        {
            total_time[carnum] += (hour * 60 + min) - in_time[carnum];
            in_time[carnum] = -1;
        }
     }
    for (int i = 0; i < 10000; i++) {
        if(car[i] !=0)
            cnt++;
        if (in_time[i] > 0)
            total_time[i] += 1439 - in_time[i];
        else if (in_time[i] == -2)
            total_time[i] = 1439;
    }

    int* answer = (int*)malloc(sizeof(int)* cnt);
    int an =0;
    for(int i =0; i <10000; i++)
    {
       if(total_time[i] !=0)
        {
           if(total_time[i] > fees[0])
            {    
                answer[an++] = fees[1] + (ceil((float)(total_time[i]-fees[0]) / (float)fees[2]) *fees[3]);
            }
            else if(total_time[i] <= fees[0])
                answer[an++] = fees[1];
        }  
    }   
     return answer;
}

