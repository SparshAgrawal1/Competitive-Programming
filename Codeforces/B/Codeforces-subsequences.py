n = int(input())
a = [1]*10
s = 'codeforces'
ans = 1
i=0
while (ans < n):
    ans = ans//a[i]
    a[i]=a[i]+1
    ans *= a[i]
    i = (i+1)%10
curr = ''
for i in range(0,10): curr += s[i]*a[i]
print(curr)