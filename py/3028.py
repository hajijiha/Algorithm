cup=[1,0,0]
mix=input()
for i in mix:
    if i=="A":
        cup[0],cup[1] = cup[1],cup[0]
    elif i=="B":
        cup[1],cup[2] = cup[2],cup[1]
    else:
        cup[0],cup[2]=cup[2],cup[0]
print(cup.index(1)+1)
