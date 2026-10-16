a, b = map(int, input().split())
s = input()
# print(type(s))
# print(a, b, s)


if s[a] == '-' and s[:a].isdigit() and s[a+1:].isdigit():
    print("Yes")
else:
    print("No")