n=int(input())
numbers =[input() for _ in range(n)]
i=1
while 1:
    if len(set(map(lambda x: x[-i:],numbers)))==n:
        print(i)
        break
    i +=1
