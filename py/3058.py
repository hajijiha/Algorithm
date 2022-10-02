a=int(input())
for i in range(a):
    sum=0
    k=list(map(int,input().split()))
    m=max(k)
    for j in k:
        if j%2==0:
            sum+=j
            m=min(j,m)
    print(sum,m)
            
    
