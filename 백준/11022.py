a = int(input())

for i in range(a):
    b, c = map(int, input().split())
    print("Case #%s: %s + %s = %s" % (i+1, b, c, b+c))
