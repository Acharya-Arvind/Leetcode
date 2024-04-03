class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a=0
        for i in digits:
            a=a*10+i
        a+=1
        b=[]
        for i in str(a):
            print(i)
            b.append(int(i))
        return b
