k=[]
f=[]
for i in range(4):
    a=int(input())
    k.append(a)
for i in range(2):
    b=int(input())
    f.append(b)
k.sort()
f.sort()
print(k[3]+k[2]+k[1]+f[1])
