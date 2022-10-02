n = int(input())
a = list(map(int, input().split()))
a.sort()
def binary_search(num):
    l = 0
    r = n-1
    while l <= r :
        mid = (l+r)//2
        if a[mid] == num :
            count+=1
        elif a[mid] > num :
            r = mid - 1
        else:
            l = mid + 1
    print(count)
for num in list(map(int, input().split())):
    binary_search(num)
 
            
    
