class Solution:
    def reverseWords(self, s: str) -> str:
        a=[]
        t=""
        b=[]
        a=s.split(" ")
        for i in a:
            # t=t+i[::-1]
            i=i[::-1]
            b.append(i)
        print(b)
        t= " ".join(b)    
        return t
        
