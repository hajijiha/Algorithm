n,k=map(int,input().split())
j=[int(input()) for i in range(n)]
j.sort(reverse=True)
count=0
for i in j:
    count+=k//i
    k%=i
print(count)
    
