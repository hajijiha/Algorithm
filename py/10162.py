a=int(input())
k=a//60
j=k//5
f=k%5
h=a%60//10
if a%10==0:
    print(j,f,h)
else:
    print('-1')
