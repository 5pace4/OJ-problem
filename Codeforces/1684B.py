t = (int)(input())
for i in range(t):
    s = input()
    a, b, c = map(int, s.split())
    print(a+b*c, b, c)
