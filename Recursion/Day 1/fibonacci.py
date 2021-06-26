#The Fibonacci sequence is defined as follows: the first number of the sequence is 0, the second number is 1 and the nth number is the sum of the (n - 1)th and (n - 2)th numbers.
#Write a function that takes in an integer n and returns the nth Fibonacci number

def getNthFib(n):
    F=[0,1]
    for i in range(2,n+1):
        F.append(F[i-1]+F[i-2])
    return F

#input an integer n
n=int(input())

#print nth fibonacci number
[ print(i, end=" ") for i in getNthFib(n)]
