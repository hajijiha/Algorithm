n,l=map(int,input().split())
x=-1
for i in range(l,101):
    t=i*(i-1)/2
    if (n-t)%i==0 and(n-t)//i>=0:
        x=(n-t)/i
        li=i
        break
if x==-1:
    print(x)
else:
    for i in range(li):
        print(int(x+i),end=' ')
        
    
