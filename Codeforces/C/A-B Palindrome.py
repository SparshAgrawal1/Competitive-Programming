x=int(input())
# qed
for i in range(x):
    a,b=[int(o) for o in input().split()]
    s=input()
    ar=list(s)
    n=a+b
    for j in range(n):
        if(ar[j]=="?"):
            ar[j]=ar[n-j-1]
    a=a-ar.count("0")
    b=b-ar.count("1")
    for j in range(n//2+1):
        if(j!=(n-j-1) and ar[j]=="?"):
            if(a>1):
                ar[j]="0"
                ar[n-j-1]="0"
                a=a-2
            elif(b>1):
                ar[j]="1"
                ar[n-j-1]="1"
                b=b-2
        elif(ar[j]=="?"):
            if(a>0):
                ar[j]="0"
                a=a-1
            elif(b>0):
                ar[j]="1"
                b=b-1
    if(ar==ar[::-1] and a==0 and b==0):
        print("".join(ar))
    else:
        print(-1)