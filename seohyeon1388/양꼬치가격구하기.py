def solution(n, k):
    answer =0
    discount= int(n/10)
    if discount>=1: answer=n*12000 + k*2000 - discount*2000
    else : answer=n*12000 + k*2000
    return answer