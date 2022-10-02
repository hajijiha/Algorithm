a,b=map(int,input().split())
sum=1
for i in range(a,b+1):
    sum*=(i*(i+1))//2
print(int(sum%14579))
    
    
