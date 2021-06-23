def getNthFib(n):
    F=[0,1]
    for i in range(2,n+1):
        F.append(F[i-1]+F[i-2])
    return F

#input an integer n
n=int(input())

#print nth fibonacci number
[ print(i, end=" ") for i in getNthFib(n)]
