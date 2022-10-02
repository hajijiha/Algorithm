n,s=map(int,input().split())
k=[0 for i in range(1002)]
q=[]
if s>0:
    q.extend(input().split())
ans=2147483647
for i in q:
    k[int(i)]=1
for i in range(1,1001):
    if k[i]==1:
        continue
    for j in range(i,1001):
        if k[j]==1:
            continue
        for f in range(j,1002):
            if k[f]==1:
                continue
            ans=min(ans,abs(n-i*j*f))
print(ans)           
