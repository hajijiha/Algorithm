a,b=map(int,input().split())
sum=b
k=[1,3,5,7,8,10,12]
j=[4,6,9,11]
for i in range(1,a):
    if i in k:
        sum+=31
    elif i in j:
        sum+=30
    elif i==2:
        sum+=28
h=sum%7
if h==1:
    print("MON")
elif h==2:
    print("TUE")
elif h==3:
    print("WED")
elif h==4:
    print("THU")
elif h==5:
    print("FRI")
elif h==6:
    print("SAT")
else:
    print("SUN")

        
    
