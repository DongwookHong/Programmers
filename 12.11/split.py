def solution(s):
    answer =''
    newSplit = s.split(" ")
    for i in range(len(newSplit)):
        new = list(newSplit[i])
        
        for j in range(len(new)):
            if(j % 2 == 0):
                new[j] = new[j].upper()
            else :
                new[j] = new[j].lower()
        newSplit[i] = "".join(new) #바뀐 문자를 다시 넣어주기
    answer = " ".join(newSplit) # 그 문자로 나온 문열을 띄어쓰기 공백으로 다 하나로 만들어주기
    return answer

    
  