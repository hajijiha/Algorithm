a=int(input())
k=list(map(int,input().split()))
count=0
for i in k:
    if i==a:
        count+=1
print(count)
