while True:
    data = input().split()
    
    if data[0] == '#':
        break
    
    name = data[0]
    age = int(data[1])
    kg = int(data[2])

    if age > 17 or kg >= 80:
        print(name + " Senior")
    else:
        print(name + " Junior")