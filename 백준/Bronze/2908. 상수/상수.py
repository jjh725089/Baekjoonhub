a,b = map(int, input().split())
aa = a // 100 + (a // 10) % 10 * 10 + a % 10 * 100
bb = b // 100 + (b // 10) % 10 * 10 + b % 10 * 100

if aa > bb:
    print(aa)
else:
    print(bb)