k=[]
a,b=map(int,input().split())
c,d=map(int,input().split())
k=[a/c+b/d,a/b+c/d,c/a+d/b,b/a+d/c]
j=k.index(max(k))
print(j)
    
