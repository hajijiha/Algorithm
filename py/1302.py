import sys
input=sys.stdin.readline
n=int(input())
books={}
for _ in range(n):
    b= input().rstrip()
    if b in books:
        books[b] +=1
    else:
        books[b] =1
orders = []
for b in books:
    orders.append((b,books[b]))
orders.sort(key=lambda x:(-x[1],x[0]))
print(orders[0][0])
