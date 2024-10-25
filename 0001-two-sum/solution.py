class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for j in range(0,len(nums)):
            for i in range(j+1,len(nums)):
                if(nums[j]+nums[i]==target):
                    list1=[]
                    list1.append(j)
                    list1.append(i)
                    return list1
            
