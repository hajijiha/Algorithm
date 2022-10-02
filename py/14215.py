li=list(map(int,input().split()))
li.sort()
if li[2]>=li[0]+li[1]:
    li[2]=li[0]+li[1]-1
print(sum(li))
