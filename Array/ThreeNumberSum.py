#O(n^2) Time / O(n) Space
def threeNumberSum(arr,targetSum):
  triplets=[]
  arr.sort()
  for i in range(len(arr)-2):
    left=i+1
    right=len(arr)-1
    while(left<right):
      currentSum=arr[i]+arr[left]+arr[right]
      if currentSum==targetSum:
        triplets.append([arr[i],arr[left],arr[right]])
        left+=1
        right-=1
      elif currentSum<targetSum:
        left+=1
      else:
        right-=1
  return triplets
