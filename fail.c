 #include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define max 1000
#define max_re 200000
// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(id_list_len);
    size_t a = 0;
    size_t cnt[max] = {0,};
    char back[max_re]= {0,};
    char front[max_re] ={0,};
    char  find[max][max] ={0,};
    size_t rt=0;

    //char **back[report_len] = {report_pt_2[0], report_pt_2[1]...}
    for(int i =0; i < report_len; i ++)
    {
        for(int j = 0; report[i][j];j++)
        {
            if(report[i][j] == ' ') 
                a = j +1;
        }
        int j,t;
        for(j = 0; report[i][j] != ' ';j++)
            front[j] = report[i][j];
        front[j] ='\0';
        for(t = 0; report[i][t+a];t++)
            back[t] = report[i][a++]; //back[i] = report_pt_space;
        back[t] = '\0';
        // 포인터로 change 
     
        for(int j = 0;id_list_len;j++)
        {
            if(strcmp(id_list[j],back)== 0) 
                cnt[i]++;//  back. 이랑 비교해줘서 신고당한사람 수 확인하기 
        }
        
    }

    //for(int i = 0; i < report_len; i ++)
    
        for(int i = 0 ; i < id_list_len; i++)
        {
            if(cnt[i] >= k)
            {
                for(int x = 0 ; id_list[i][x]; x++)
                    find[i][x]= id_list[i][x];
                //for(int j = 0; report[i][j]; j++)
                //{
                if((strstr(report[i] , front)) && (strstr(report[i], find[i])))  
                    {      
                        for(int k =0; k< id_list_len; k++)
                        {
                            if(strcmp(id_list[k],front) == 0)
                                    answer[k]++;
                        }
                    }
            //    }    
            }
        }
            /*for(int x = 0; id_list[j][x]; x++)
            {
                if(cnt[j] >= k)
                 find[j][x] = id_list[j][x]; 
            }*/
        
        
        /*size_t ans_cnt= 0;
        for(int j = 0 ; report[i][j]; j++)
        {
            if(strstr(report[i][j] , front[j]) && strstr(report[i][j], find[j]))  
               {      
                  if(strcmp(front[j],id_list[j]) == 0)
                        answer[j]++;
                }       
        }   
          */   
                  
     return answer;
}

int main () 

{
    const char* id_list[] = {"muzi", "frodo", "apeach", "neo"};
    const char* report[] = {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
    int k = 2;
    int* answer = solution(id_list, 4, report, 5, k);
    for(int i = 0; i<5; ++i){
        printf("%d ", answer[i]);
    }
    printf("\n");
    const char* id_list2[] = {"con", "ryan"};
    const char* report2[] = {"ryan con", "ryan con", "ryan con", "ryan con"};
    int k2 = 3;
    int* answer2 = solution(id_list2, 2, report2, 4, k2);
    for(int i = 0; i<4; ++i){
        printf("%d ", answer2[i]);
    }
    printf("\n");
    return 0;
}
