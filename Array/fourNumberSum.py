#O(n^2) Time | O(n^2) Space
def fourNumberSum(array,targetSum):
    allPairsSum={}
    quadruplets=[]
    for i in range(1,len(array)-1):

        #iterating right part of array element
        for j in range(i+1,len(array)):
            currentSum=array[i]+array[j]
            difference=targetSum-currentSum
            if difference in allPairsSum:
                for pair in allPairsSum[difference]:
                    quadruplets.append(pair+[array[i],array[j]])

        #iterating left part of the array element
        for k in range(0,i):
            currentSum=array[i]+array[k]
            if currentSum not in allPairsSum:
                allPairsSum[currentSum]=[array[k],array[i]]
            else:
                allPairsSum[currentSum].append([array[k],array[i]])
    return quadruplets