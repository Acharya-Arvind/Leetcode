class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        s=set(nums)
        c=0
        
        for i in s:
            n=nums.count(i)
            if c<n:
                c=n
                m=i
        return m




        
