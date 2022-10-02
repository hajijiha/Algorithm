a,b=map(int,input().split())
c=int(input())
j=[1000/b*a]
for i in range(c):
    n,m=map(int,input().split())
    j.append(1000/m*n)
print("%.2f"%(min(j)))
