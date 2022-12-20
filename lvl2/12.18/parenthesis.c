
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int cnt = 0;
    int i =0;
    
while(s[i])
{
      if(s[i] == '(')
          cnt++;
      else
      {
        if(cnt ==0)
            return false;
        cnt--;
      }
    i++;
}
    if(cnt != 0)
        answer = false;

    return answer;
}
//내 코드


// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// #include <string.h>

// // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// bool solution(const char* s) {
//     int len = strlen(s);
//     int parentheses = 0;
//     for(int i = 0; i<len; i++){
//         parentheses += (s[i] == '(' ? 1 : -1);
//         if(parentheses < 0)
//             return false;
//     }
//     return parentheses == 0;
// }
// 배울코드 
