a,b=map(int,input().split())
for i in range(1,a*b+1):
    print(i,end=' ' if i%b!=0 else '\n')
