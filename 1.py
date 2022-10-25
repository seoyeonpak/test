l=[1,1,1]
n=int(input())
for i in range(n-3):
    l.append(l[i]+l[i+2])
print(l[-1])