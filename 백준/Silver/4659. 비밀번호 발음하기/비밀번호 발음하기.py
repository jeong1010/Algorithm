mList = ['a', 'e', 'i', 'o', 'u']
okList = ['e', 'o']
while(1):
    isValid = True
    haveVowel = False
    str1 = input()
    if str1 == 'end': break
    for i in range(len(str1)):
        if str1[i] in mList: haveVowel = True
        if i >= 1:
            if (str1[i] == str1[i-1]) & (str1[i] not in okList): isValid = False
        if i >= 2:
            list1 = []
            for j in range(i,i-3,-1):
                if str1[j] in mList: list1.append('v')
                else: list1.append('c')
            if (list1.count('v') >= 3) | (list1.count('c') >= 3): isValid=False
        
    print('<{0}> is '.format(str1), end='')
    if not (isValid & haveVowel):
        print('not ', end='')
    print('acceptable.')
