class Solution:
    def reverse(self, x: int) -> int:
        if x>0:
            y= int(str(x)[::-1])
        else:
            y= -1*int(str(-1*x)[::-1])
        if not( y<(2**31)-1 and y>-(2**31)):
            return 0
        return y