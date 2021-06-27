#The Fibonacci sequence is defined as follows: the first number of the sequence is 0, the second number is 1 and the nth number is the sum of the (n - 1)th and (n - 2)th numbers.
#Write a function that takes in an integer n and returns the nth Fibonacci number

def getNthFib(n):
    if n <= 2:
        return n-1
    return getNthFib(n-1)+getNthFib(n-2)

#input an integer n
n=int(input())

#print nth fibonacci number
print(n,"th fibonacci number: ",getNthFib(n), sep="")
