for _ in range(int(input())):
    m,k1=list(map(int,input().split()))
    arr=list(map(int,input().split()))
    sa=[0 for j in range(0,m)]
    n=0
    for i in range(0,m):
        if(arr[i]<=k1//2 and(arr[i]//2!=k1/2)):
            sa[i]=1
        if(arr[i]==k1/2):
            n=n+1
            if(n%2==0):
                sa[i]=0
            else:
                sa[i]=1  
    for i in range (0,m):
        print(sa[i],end=" ")
    print()