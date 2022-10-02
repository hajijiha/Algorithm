import sys
input=sys.stdin.readline
n,h=map(int,input().split())
k=list(map(int,input().split()))
k.sort()
start=0
end=max(k)
while start<=end:
    total=0
    mid=(start+end)//2
    for i in k:
        if i>mid:
            total+=i-mid
    if total>=h:
        start=mid+1
    else:
        end=mid-1
print(end)
        
    
