k=list(map(int,input().split()))
j=0
if sum(k)>=100:
    print('OK')
else:
    j=k.index(min(k))
    if j==0:
        print("Soongsil")
    elif j==1:
        print("Korea")
    else:
        print("Hanyang")
