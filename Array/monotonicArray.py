#************************************* Approach 1 ****************************************
#O(n) Time / O(1) Space
def isMonotonicArray(arr):
  if len(arr)<=2:
    return True
  
  direction=arr[1]-arr[0]
  for i in range(2,len(arr)):
    if direction==0:
      direction=arr[i]-arr[i-1]
      continue
    if breakDirection(direction,arr[i-1],arr[i]):
      return False
  
  return True

def breakDirection(direction,prevNum, currNum):
  diff=prevNum-currNum
  if direction>0:
    return diff<0
  return diff>0


#************************************* Approach 2 ****************************************
#O(n) Time / O(1) Space
def isMonotonicArray(arr):
  isNonInc=True
  isNonDec=True
  
  for i in range(1,len(arr)):
    if arr[i]>arr[i-1]:
      isNonInc=False
    if arr[i]<arr[i-1]:
      isNonDec=False
      
  return isNonDec or isNonInc
