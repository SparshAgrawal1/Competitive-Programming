t=int(input())
for j in range(0,t):
    n=int(input())
    d=0
    d1=0
    for k in range(0,n):
        b=list(map(int,input().split()))
        s=b[1]+b[2]
        d=d+b[0]*b[2]/s
        d1=d1+b[0]*b[1]/s
    print('%0.5f'%d,'%0.5f'%d1)