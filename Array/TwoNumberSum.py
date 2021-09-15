#naive approach
#O(n^2) Time / O(1) Space
def twoNumberSum(arr,targetSum):
  for i in range(len(arr)-1):
    for j in range(i,len(arr)):
      return [arr[i],arr[j]]
  return []


#Efficient Approach
#O(nlogn) Time / O(1) Space
def twoNumberSum(arr,targetSum):
  arr.sort()
  l,r=0,len(arr)-1
  while(l<r):
    if arr[l]+arr[r]==targetSum:
      return [arr[i],arr[j]]
    elif arr[l]+arr[r]<targetSum:
      l+=1
    else:
      r-=1
  return []
