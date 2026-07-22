class Solution:
    def convertDateToBinary(self, date: str) -> str:
        part=date.split("-")
        ans=[]
        for c in part:
            num=int(c)
            binary = bin(num)[2:]
            ans.append(binary)
        return "-".join(ans);
