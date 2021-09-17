#O(n) Time / O(1) Space
def moveElementToEnd(arr,toMove):
  i=0
  j=len(arr)-1
  while(i<j):
    while(i<j and arr[j]==toMove):
      j-=1
    if arr[i]==toMove:
      arr[i],arr[j]=arr[j],arr[i]
    i+=1
  return arr
