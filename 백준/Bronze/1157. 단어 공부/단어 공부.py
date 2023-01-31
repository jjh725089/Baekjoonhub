wup = input().upper()
sw = set(wup)
max = 0
maxi = 0

for i in sw:
    if max < wup.count(i):
        max = wup.count(i)
        maxi = i
    elif max == wup.count(i):
        maxi = '?'
print(maxi)
