a,b=map(int,input().split())
sum=a
k=a//b
while True:
    sum+=k
    k=k//b
    if k==0:
        break
print(sum)
    
    
