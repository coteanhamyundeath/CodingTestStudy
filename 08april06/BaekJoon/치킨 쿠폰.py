while True : 
    try :
    n, k = map(int, input().split())
    answer = n
    
    while n >= k :
        new_ck = n // k
        stamp = n % k
        
        answer += new_ck
        n = new_ck + stamp
        
    print(answer)
    except :
        break
    