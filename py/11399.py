n=int(input())
k=list(map(int,input().split
k.sort()
count=0
sum=0
for i in k:
    count+=i
    sum+=count
print(sum)
