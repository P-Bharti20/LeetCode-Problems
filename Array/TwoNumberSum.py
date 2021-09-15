#naive approach
def twoNumberSum(arr,targetSum):
  for i in range(len(arr)-1):
    for j in range(i,len(arr)):
      return [arr[i],arr[j]]
  return []
