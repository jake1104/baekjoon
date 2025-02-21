n=int(input())
w={min([x[i:]+x[:i]for i in range(len(x))])for x in[input().strip()for _ in range(n)]}
print(len(w))