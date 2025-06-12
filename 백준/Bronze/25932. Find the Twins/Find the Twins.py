n = int(input())
for i in range(n):
    q = 0
    a = list(map(int, input().split(' ')))
    if 18 in a: q += 1
    if 17 in a: q += 2
    for j in a:
        print(j, end=' ')
    print()
    if q == 3: print('both\n')
    elif q == 2: print('zack\n')
    elif q == 1: print('mack\n')
    else: print('none\n')
