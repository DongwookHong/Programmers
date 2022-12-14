def solution(s):
    answer = []#anser를  list로변환
    s =list(s)
    s.sort()  #정리를 해주고 
    s.reverse() #다시뒤집어주기
    answer = ''.join(s)
    return answer