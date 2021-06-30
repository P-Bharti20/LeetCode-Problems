#Write a function that takes in an array of unique integers and returns its powerset.
''' 
The powerset P(X) of a set X is the set of all subsets of X.  
For example, the powerset of [1,2] is [[], [1], [2], [1,2]].
'''

def powerSet(arr):
    if len(arr) == 0:
        return [[]]
    else:
        base = powerSet(arr[:-1])
        operator = arr[-1:]
        return base+[ (b+operator) for b in base]

array = list(map(int,input().split()))
print("Power Set: ", powerSet(array))


