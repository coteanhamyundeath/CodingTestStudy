number = input()

if number == '0':
    print(0)
else:
    result = ''

    for i in range(len(number)):
        binary = bin(int(number[i]))[2:]

        if i == 0:
            result += binary  # 앞자리는 그대로
        else:
            result += binary.zfill(3)  # 3자리 맞추기

    print(result)