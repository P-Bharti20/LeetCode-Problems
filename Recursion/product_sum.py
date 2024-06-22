#Write a function that takes in a "special" array and returns its product sum.
#A "special" array is a non-empty array that contains either integers or other "special" arrays. The product sum of a "special" array is the sum of its elements, 
#where "special" arrays inside it are summed themselves and then multiplied by their level of depth.

array=[5,2,[7,-1],3,[6,[-13,8],4]]

def productSum(arr, level=1):
    sum=0
    for elem in arr:
        if type(elem) is list:
            sum+=productSum(elem, level+1)
        else:
            sum+=elem
    return sum*level

print(productSum(array))
