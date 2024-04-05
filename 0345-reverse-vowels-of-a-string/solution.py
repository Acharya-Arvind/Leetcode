class Solution:
    def reverseVowels(self, s: str) -> str:
        a="aeiouAEIOU"
        l1=[]
        s1=""
        s2=""
        for i in s:
            if i in a:
                l1.append(i)
                s1=s1+"_"
                continue
            s1=s1+i
        l1.reverse()
        for i in s1:
            if i=="_":
                s2=s2+l1[0]
                l1.remove(l1[0])
                continue
            s2=s2+i
        return s2
        




        
