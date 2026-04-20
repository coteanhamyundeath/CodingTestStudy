total = 0
for i in range(5) :
    score = int(input())
    if 0 <= score <= 100 and score % 5 == 0 :
        if score <= 40 :
            score = 40
        
        total = total + score
            
print(total // 5)
   