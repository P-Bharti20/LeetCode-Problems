# O(nlog(n) + O(mlog(m)) Time / O(1) Space
def smallestDifference(arr1, arr2):
  arr1.sort()
  arr2.sort()
  smallestPair=[]
  smallest=float("inf")
  p1,p2=0,0
  while(p1<len(arr1) and p2<len(arr2)):
    #instead, current=abs(arr1[p1]-arr2[p2])
    if arr1[p1]<arr2[p2]:
      current=arr2[p2]-arr1[p1]
      p1+=1
    elif arr[p1]>arr[p2]:
      current=arr1[p1]-arr2[p2]
      p2+=1
    else:
      return [arr1[p1],arr2[p2]]
    if smallest>current:
      smallest=current
      smallestPair=[arr1[p1],arr2[p2]]
  return smallestPair
      
