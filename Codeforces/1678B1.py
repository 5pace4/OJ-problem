testcase = (int)(input())
for i in range(testcase):
    n = (int)(input())
    s = input()
    ans = 0
    for k in range(int(n/2)):
        if s[2*k] != s[2*k+1]:
            ans = ans + 1
    print(ans)
