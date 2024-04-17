class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        b=set(nums)
        for i in b:
            if nums.count(i)==1:
                return i
        return 0
        
