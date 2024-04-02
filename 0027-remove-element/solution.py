class Solution:
    def removeElement(self, nums: List[int], val: int):
        n=len(nums)
        while val in nums:
            nums.remove(val)
        return len(nums)


        
        
