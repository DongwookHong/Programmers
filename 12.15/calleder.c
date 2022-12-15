#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
//1,1 금  2,1 월
//3,1화 4,1금
//5,1일 6,1수
//7,1금 8,1월
//9,1목 10,1토
//111화 12 1 목
// char *date(int a,int b)
// {
//     char date[10][5]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
//     char mdate[12][4] = {"FRI","MON","TUE","FRI","SUN","WED","FRI","MON","THU","SAT","TUE","THU"};
    
        
//     int i = a-1;
//     int cnt =0;
//     int k = (b%7-1);//2
//     // printf("%d",k);
//     //printf("%s\n",mdate[i]);
//     char* answer = (char*)malloc(4);
//     for(int j=0; j<=6 ;j++)
//     {
//         if(strcmp(mdate[i] ,date[j])==0)
//         {
//             cnt =j+k;
//             if(cnt >= 7)
//                 cnt = cnt%7;
//         }
//     }
//     //printf("%d",cnt);
//     answer = date[cnt];
//     printf("%s",answer);
//     return answer;
// }

char* solution(int a, int b) {
   char date[8][5]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    char mdate[12][4] = {"FRI","MON","TUE","FRI","SUN","WED","FRI","MON","THU","SAT","TUE","THU"};
    
        
    int i = a-1;
    int cnt =0;
    int k = (b%7-1); 
    char* answer;
    for(int j=0; j<=6 ;j++)
    {
        if(strcmp(mdate[i] ,date[j])==0)
            {
                cnt =((j+k)%7); //-1
                if (cnt <0)
                    cnt =6;
            }
    }
    answer = strdup(date[cnt]);
    return answer;
}

int main()
{
    int a =5;
    int b=24;
    printf("%s",solution(a,b));
    return 0;
}