n = int(input())
arr = []
sum = 0
for i in range(n):
    arr.append(int(input()))
    if(i % 2 == 0): continue
    sum += arr[i] - arr[i-1]
if(n % 2 == 0):
    print(sum)
else:
    print("still running\n")