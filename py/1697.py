x,y=map(int,input().split())
count=0
while(x!=y):
    if abs(y-x)>abs(y-2*x):
        x*=2
        count+=1
        continue
    if x>y:
        x-=1
        count+=1
        continue
    x+=1
    count+=1
print(count)
    
    
