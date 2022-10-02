a=int(input())
k=[]
for i in range(a):
    j=int(input())
    if j==0:
        k.pop()
    else:
        k.append(j)
print(sum(k))
