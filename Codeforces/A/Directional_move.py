# cook your dish here
for _ in range (int(input())):
    n=int(input())
    s=input()
    l=0
    for i in range(0,n):
        if(s[i]=='0'):
            l=l+1
            l=l%4
        else:
            l=l-1
            l=l%4
    if(l==0):
        print("E")
    elif(l==1):
        print("S")
    elif(l==2):
        print("W")
    elif(l==3):
        print("N")
        