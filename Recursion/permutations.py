#Write a function that takes in an array of unique integers and returns an array of all permutations of those integers in no particular order.
#If the input array is empty, the function should return an empty array.

#O(n*n!) time | O(n*n!) space
def Permutation(array):
    permutations = []
    getPermutation(0, array, permutations)
    return permutations

def getPermutation(k, arr, permutations):
    if k == len(arr)-1:
        permutations.append(arr[:])
    else:
        for i in range(k, len(arr)):
            arr[k], arr[i] = arr[i], arr[k]
            getPermutation(k+1,arr,permutations)
            arr[k], arr[i] = arr[i], arr[k]

array = list(map(int, input().split()))
print(Permutation(array))
