import math
a=int(input())
k=list(map(int,input().split()))
c=int(input())
count=0
for i in k:
    if i>c:
        count+=math.ceil(i/c)
    elif i==0:
        count+=0
    else:
        count+=1
print(count*c)
