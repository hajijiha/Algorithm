num=int(input())
k=[]
for i in range(num):
    k.append(list(map(int,input().split())))
k.sort(key=lambda x:x[0])
ave=k[0][0]
f=[]
for i,s in k:
    sum=0
    for j in range(num):
        if i<=k[j][0] and i>k[j][1]:
            sum+=i-k[j][1]
    f.append(sum)
if max(f)>0:
    print(k[f.index(max(f))][0])
else:
    print('0')

    
