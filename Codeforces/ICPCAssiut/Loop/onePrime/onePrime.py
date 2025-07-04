n = int(input())
count = 0

if n <= 1:
    print("NO")
else:
    for i in range(1, n+1):
        if n % i == 0:
            count += 1

    if count > 2:
        print("NO")
    else:
        print("YES") 