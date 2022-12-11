hour, min = map(int, input().split())
time = int(input())
totmin: int = hour * 60 + min
endmin = totmin + time
h = endmin // 60
m = endmin % 60
if endmin > 1439:
    print(h-24,m)
else:
    print(h,m)


