import sys
a = sys.stdin.read()
k=[chr(i) for i in range(97,123)]
j=[]
for i in k:
    j.append(a.count(i))
q=[]
count=0
for w in j:
    count+=1
    if w==max(j):
        q.append(count)
for o in q:
    print(k[o-1],end='')
