class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        a=[]
        if target not in nums:
            return [-1,-1]
        a.append(nums.index(target))
        for i in range(len(nums)-1,-1,-1):
            if nums[i]==target:
                a.append(i)
                break
        return a
        
