a=int(input())
count=1
while a>1:
    if a%2==1:
        a=a*3+1
    else:
        a=a/2
    count+=1
print(count)
    
