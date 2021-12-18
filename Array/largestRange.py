# O(n) Time | O(n) Space
def largestRange(array):
    bestRange=[]
    longestLength=0
    nums={}
    for elem in array:
        nums[elem]=True
    for elem in array:
        if not nums[elem]:
            continue
        nums[elem]=False
        currentLength=1
        left=elem-1
        right=elem+1
        while left in nums:
            nums[left]=False
            currentLength+=1
            left-=1
        while right in nums:
            nums[right]=False
            currentLength+=1
            right+=1
        if currentLength>longestLength:
            longestLength=currentLength
            bestRange=[left+1,right-1]
    return bestRange