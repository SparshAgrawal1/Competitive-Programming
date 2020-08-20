# cook your dish here
def decimalToBinary(n):  
    return bin(n).replace("0b", "") 
def binaryToDecimal(n): 
    return int(n,2) 
for _ in range (int(input())):
    a=int(input())
    n=list(map(int,input().split()))
    ans=-1
    for i in range (0,a):
        for j in range (i+1,a):
             s1=decimalToBinary(n[i])
             s2=decimalToBinary(n[j])
             s3=s1+s2
             s4=s2+s1
             x = binaryToDecimal(s3)
             y = binaryToDecimal(s4)
             z = abs(x-y)
             ans=max(ans,z)
    print(ans)