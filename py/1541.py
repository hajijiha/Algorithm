a=input().split('-')
n=[]
for i in a:
    cnt=0
    s=i.split('+')
    for j in s:
        cnt+=int(j)
    n.append(cnt)
sum=n[0]
for i in range(1,len(n)):
    sum-=n[i]
print(sum)
