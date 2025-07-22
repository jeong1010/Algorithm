n, m = map(int, input().split())
non = set()
n1 = set()
n2 = set()

for _ in range(n):
    n1.add(input())
for _ in range(m):
    n2.add(input())

non = n1 & n2

print(len(non))

z = sorted(list(non))

for name in z:
    print(name)