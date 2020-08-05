t=int(input())
a=list(map(int,input().split()))
c=0;
for i in range(0,t):
    c=c+(a[i]/t)
print("{0:.12f}".format(c))