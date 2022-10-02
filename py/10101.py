k=[int(input()) for _ in range(3)]
if sum(k) == 180:
   if k[0] == k[1] == k[2]:
       print("Equilateral")
    elif k[0] == k[1] or k[1] == k[2] or k[0] == k[2]:
        print("Isosceles")
    else:
        print("Scalene")
else:
    print("Error")
