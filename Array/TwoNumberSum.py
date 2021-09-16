#naive approach
#O(n^2) Time / O(1) Space
def twoNumberSum(arr,targetSum):
  for i in range(len(arr)-1):
    for j in range(i,len(arr)):
      return [arr[i],arr[j]]
  return []


#Efficient Approach
#O(n) Time / O(n) Space
def twoNumberSum(arr,targetSum):
  nums={}
  for num in arr:
    if targetSum-num in nums:
      return [targetSum-nums,num]
    else:
      nums[num]=True
  return []


#Another Approach
#O(nlogn) Time / O(1) Space
def twoNumberSum(arr,targetSum):
  arr.sort()                      #O(nlogn) time
  left,right=0,len(arr)-1
  while(left<right):              #O(n) time
    currentSum=arr[left]+arr[right]
    if currentSum==targetSum:
      return [arr[left],arr[right]]
    elif currentSum<targetSum:
      left+=1
    elif currentSum>targetSum:
      right-=1
  return []

