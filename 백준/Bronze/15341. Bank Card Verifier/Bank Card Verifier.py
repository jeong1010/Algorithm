while True:
    numbers = input()
    if numbers == '0000 0000 0000 0000':
        break
    numbers = numbers[:4] + numbers[5:9] + numbers[10:14] + numbers[15:]
    
    list = []
    sum_ = 0
    index = 1
    for i in numbers:
        i = int(i)
        isReplace = 0

        if index % 2 == 1:
            i *= 2
            isReplace = 1
        if i > 9:
            i -= 9
            isReplace = 1

        list.append(i)

        if isReplace:
            sum_ += i   

        index += 1

    for i in range(1,16,2):
        sum_ += list[i]
    # print(sum_)

    if sum_ % 10 == 0:
        print("Yes")
    else:
        print("No")