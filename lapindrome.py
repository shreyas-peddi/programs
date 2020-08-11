# cook your dish here
for _ in range(int(input())):
    s=list(input())
    l=len(s)
    mid=l//2
    s1=s[:mid]
    if l%2:
        s2=s[mid+1:]
    else :
        s2 =s[mid:]
    if(sorted(s1)==sorted(s2)):
        print("YES")
    else:
        print('NO')