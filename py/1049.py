n,m=map(int,input().split())
k=[]
for i in range(m):
    a,b=map(int,input().split())
    if n%6==0:
        j=n//6
    else:
        j=n//6+1
    k.append(min(a*j,b*n,a*(n//6)+b*(n%6)))
print(min(k))
    
