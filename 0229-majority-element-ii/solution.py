class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n=len(nums)
        a=[]
        for i in nums:
           if nums.count(i)>n/3:
                if i not in a:
                    a.append(i) 
        return a

        
