class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s[::-1]
        c=0
        d=0
        for i in s:
            if(i==' '):
                c+=1
                continue
            break
        for i in s[c::]:
            if(i==' '):
                break   
            d+=1
        return d
