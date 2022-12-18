#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define max 1000
#define max_re 200000
// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len,  const char* report[], size_t report_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)calloc(sizeof(int), id_list_len);
    int a = 0;
    int cnt[max] = {0,};
    char back[max][max] ={0,};
    char front[max][max] ={0,};
    char abc[max][max] ;//= report ;
    // 외않되?
    for(int i =0 ; i< report_len ; i++)
    {
         for(int j =0 ;report[i][j] ; j++)
         {
            abc[i][j] = report[i][j];
         }
     }
     //printf("원본함수 : ");
    // for(int i =0 ; i< report_len ; i++)
    // {
    //      for(int j =0 ;report[i][j] ; j++)
    //      {
    //         printf("%c",report[i][j]);
    //      }
    // }
    // printf("------------\n");
    // for(int i =0 ; i< report_len ; i++)
    // {
    //      for(int j =0 ;report[i][j] ; j++)
    //      {
    //         printf("%c",abc[i][j]);
    //      }
    // }
   
  //  char cpy[21];

   //e strcpy(cpy, report[0]);


    //char **back[report_len] = {report_pt_2[0], report_pt_2[1]...}
    for(int i =0; i < report_len; i ++)
    {
        // printf("first for %d:\n", i);
        for(int j = 0; report[i][j];j++)
        {
           // printf("for 1 --- [%d]\n", j);
            if(report[i][j] == ' ') 
            {
                a = j +1;
                break;
            }
        }

        int j,t;
        for(j = 0; report[i][j] != ' '; j++)
        {
            //printf("for 2 --- [%d]\n", j);
            front[i][j] = report[i][j];
        }
        front[i][j] = '\0';

        for(t = 0; report[i][a]; t++)
        {
            //printf("for 4 --- [%d]\n", t);
            back[i][t] = report[i][a]; //back[i] = report_pt_space;
            a++;
        }
        back[i][t] = '\0';
        
   
         for(int j = i+1;j < report_len; j++)
        {
            if(report[i] == report[j])
                report[j] = "abc";
            // if(!(strcmp(id_list[j],back[i])))
            //     cnt[j]++;
           //printf("for 5 --- [%d]\n", cnt[j]);//  back. 이랑 비교해줘서 신고당한사람 수 확인하기 
        }   
      

        for(int j = 0;j<id_list_len;j++)
        {

            if(!(strcmp(id_list[j],back[i])))
                cnt[j]++;
           //printf("for 5 --- [%d]\n", cnt[j]);//  back. 이랑 비교해줘서 신고당한사람 수 확인하기 
        }   
        
        // for(int j = i+1; j < report_len; j++)
        // {
        //     if((front[i] == front[j]) && (back[i] == back[j]))
        //     {
        //          for(int j = 0;j<id_list_len;j++)
        //           {
        //              if(!(strcmp(id_list[j],back[i])))
        //                 cnt[j]=1;
        //             //printf("for 5 --- [%d]\n", cnt[j]);//  back. 이랑 비교해줘서 신고당한사람 수 확인하기 
        //         }  
        //     }
        // }
    }





        for(int i = 0 ; i < report_len ; i++)
        {
            
            for(int j = 0;j < id_list_len;j++)
         {
           // printf("for j --- [%s]\n", id_list[j]);
              if(cnt[j] >= k)
            {
                 //printf("for j >k --- [%s]\n", back[j]);
                  if(strcmp(back[i],id_list[j]) == 0)
                {
                    // printf("for%d j >k ---  [%s]\n",i, back[i]);
                    // printf("for%d j >k ---  [%s]\n",i, front[i]);
                    for(int c =0; c < id_list_len; c++)
                    {     
                        if(strcmp(front[i],id_list[c]) == 0)
                            answer[c]++;
                    }
                }
                }
         }
        }
    
    return answer;
}

int main () 

{
    const char* id_list[] = {"muzi", "frodo", "apeach", "neo"};
    const char* report[] = {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
    int k = 2;
    int* answer = solution(id_list, 4, report, 5, k);
    for(int i = 0; i<4; ++i){
       printf("%d ", answer[i]);
    }
    printf("\n");
    const char* id_list2[] = {"con", "ryan"};
    const char* report2[] = {"ryan con", "ryan con", "ryan con", "ryan con"};
    int k2 = 3;
    int* answer2 = solution(id_list2, 2, report2, 4, k2);
    for(int i = 0; i<2; ++i){
        printf("%d ", answer2[i]);
    }
   printf("\n");
    return 0;
}