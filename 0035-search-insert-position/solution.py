class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        c=0
        for i in nums:
            if(i>=target):
                # c+=1
                break
            c+=1
        return (c)           
            
        
