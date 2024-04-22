class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max=0
        c=0
        for i in nums:
            if i==1:
                c+=1
                if(max<c):
                    max=c
            if(i!=1):
                c=0
        return max
