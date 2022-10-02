a,b=map(int,input().split())
c,d=map(int,input().split())
e,f=map(int,input().split())
x1=[a,c,e]
y1=[b,d,f]
for i in x1:
    if x1.count(i)==1:
        x=i
for i in y1:
    if y1.count(i)==1:
        y=i
print(x,y)
