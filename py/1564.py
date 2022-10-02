def fact(n):
    k=1        
    for i in range(1,n+1):
        k*=i
        while (k%10==0):
            k//=10
        k%=10000000000000
    return k
N=int(input())
j=fact(N)
j=j%100000
if len(str(j))<5:
    print('0'*(5-len(str(j)))+'%s'%(str(j)))
else:
    print(j)

