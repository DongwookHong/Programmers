def solution(a, b):
    answer = 0
    if a > b:
        a,b = b,a
    for i in range(a, b+1): # range (a ,b) 까지 도려면 a, b+1을 해줘야함 
        answer += i
    return answer
#내가 푼거 

def solution(a, b):
    answer = 0
    if a > b:
        a,b = b,a
    return answer =sum(range(a,b+1))
#다른사람이푼거 
