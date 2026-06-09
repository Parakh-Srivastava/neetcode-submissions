class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) == len(t)):
            sl = list(s)
            tl = list(t)
            tl.sort()
            sl.sort()  #We will learn merge sort while learning back tracking 
            if  tl == sl:
                return True
            else:
                return False
        else:
            return False