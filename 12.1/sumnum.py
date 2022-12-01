def solution(numbers):
    answer = 0
    for i in range(1,10):
        if  i not in numbers: // not in i 가  number  에 들어가있 지않으 함수찾기 
            answer += i
    return answer
