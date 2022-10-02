N,A=map(int,input().split())
def factorial(n):
    k = 1
    for i in range(1, n+1):
        k *= i
    return k
j=factorial(N)
a=A
num=0
sum=0
while A<=j:
    sum+=1
    if j%A==0:
        num=max(num,sum)
    A=A*a
print(num)
