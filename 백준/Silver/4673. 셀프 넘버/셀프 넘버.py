lst = []
f = list(range(1,10001))
ff = []
for i in range(1,10001):
    if i < 10:
        d = i + i
        if d <= 10000:
            lst.append(d)
    elif i < 100:
        d = i + i // 10 + i % 10
        if d <= 10000:
            lst.append(d)
    elif i < 1000:
        d = i + i // 100 + ((i // 10) % 10 ) + (i % 10)   #9999
        if d <= 10000:
            lst.append(d)
    elif i < 10000:
        d = i + i // 1000 + ((i // 100) % 10) + ((i // 10) % 10) + i % 10
        if d <= 10000:
            lst.append(d)
for i in range(10000):
    if f[i] not in lst:
        ff.append(f[i])
for i in range(len(ff)):
    print(ff[i])