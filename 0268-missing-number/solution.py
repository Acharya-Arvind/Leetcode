class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        for i in range(n+1):
            if(i>n-1):
                return i
            if(nums[i]!=i):
                return i
        return 0
