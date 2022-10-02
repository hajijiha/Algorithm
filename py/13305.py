n=int(input())
dis=list(map(int,input().split()))
pri=list(map(int,input().split()))
sum=0
mi=pri[0]
for a in range(n-1):
    mi=min(pri[a],mi)
    sum+=mi*dis[a]
print(sum)
    
