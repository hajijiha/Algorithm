a,b=map(int,input().split())
k=[]
for i in range(a):
    k.append(input())
q,w=0,0
for i in range(a):
    if "X" not in k[i]:
        q+=1
for j in range(b):
    if "X" not in [k[i][j] for i in range(a)]:
        w+=1
print(max(q,w))
