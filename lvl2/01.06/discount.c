import java.util.*;
 class Solution {
     public int solution(String[] want, int[] number, String[] discount) {

     int res = 0;
     int i = 0;
     int cnt;
     int flag = 1;

         while ( i < discount.length)
         {
             cnt = 0; 
             flag = 1;
             int j = i;
             while (cnt < 10)
             {
                 for(int k = 0; k < want.length; ++k)
                 {
                     if(discount[j].equals(want[k]))
                     {
                         if(number[k] == 0)
                             continue;
                         --number[k];    
                     }
                 }
                 ++j;
                 ++cnt;
             }
             for(int p = 0; p < want.length; ++p)
             {
                 if(number[p] != 0)
                     flag = 0;
             }
             if(flag == 1)
                 ++res;
             i++;
             if( discount.length - i <= 10)
                 break;
         }
         return res;
     }
 }
