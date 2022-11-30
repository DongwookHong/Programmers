#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int temp = 0;
    for(int i =0 ; i < sizes_rows ; i ++ )
    {
        if(sizes[i][0] < sizes[i][1])
        {
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp; 
        }
         //printf("%d  큰값   ", sizes[i][0]);
        // printf("%d  뒤에값   ", sizes[i][1]);    
    }
      
    int a=sizes[0][0];
    int b=sizes[0][1];

    for(int i  = 0 ; i <sizes_rows-1; i ++)
    {
        if(a< sizes[i+1][0])
            a= sizes[i+1][0];
        if(b < sizes[i+1][1])
            b= sizes[i+1][1];
    }
       
     answer = a*b;
    return answer;
}
int main ()
{
    int sizes[2][2]  = 
    {
        {60,50},
        { 30,70 },
       // {60 ,30} ,
        //{80 ,40}
    };

    // int **sizes;

    // sizes = malloc(sizeof(int *) * 2);
    // sizes[0] = calloc(2, sizeof(int));
    // sizes[1] = calloc(2, sizeof(int));

    // sizes[0][0] = 60;
    // sizes[0][1] = 50;
    // sizes[1][0] = 30;
    // sizes[1][1] = 70;

    
    // // int **ptr = sizes;
    // size_t rows = 1000;
    // size_t cols = 1000;
    

    // int a = solution(sizes[][],2,2);

    // int answer = 0;
    // int temp = 0;
    // for(int i =0 ; i < 1 ; i ++ )
    // {
    //     if(sizes[i][0] < sizes[i][1])
    //     {
    //         temp = sizes[i][0];
    //         sizes[i][0] = sizes[i][1];
    //         sizes[i][1] = temp; 
    //     }
    //      //printf("%d  큰값   ", sizes[i][0]);
    //     // printf("%d  뒤에값   ", sizes[i][1]);    
    // }
      
    // int a=sizes[0][0];
    // int b=sizes[0][1];

    // for(int i  = 0 ; i < 1; i ++)
    // {
    //     if(a< sizes[i+1][0])
    //         a= sizes[i+1][0];
    //     if(b < sizes[i+1][1])
    //         b= sizes[i+1][1];
    // }
       
    
    // answer = a*b;
    // //return (answer);
     printf("%d", a);
}