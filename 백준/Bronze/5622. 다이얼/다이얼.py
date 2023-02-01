c = input()
time = 0
for i in range(len(c)):
    if c[i] in 'ABC':
        time += 3
    elif c[i] in 'DEF':
        time += 4
    elif c[i] in 'GHI':
        time += 5
    elif c[i] in 'JKL':
        time += 6
    elif c[i] in 'MNO':
        time += 7
    elif c[i] in 'PQRS':
        time += 8
    elif c[i] in 'TUV':
        time += 9
    else:
        time += 10
print(time)