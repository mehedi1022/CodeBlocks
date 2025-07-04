n = int(input())  
arr = list(map(int, input().split()))
max = arr[0]
maxPos = 0
min = arr[0]
minPos = 0
for i in range(1,n):
    if arr[i] > max:
        max = arr[i]
        maxPos = i
    if arr[i] < min:
        min = arr[i]
        minPos = i
# arr[maxPos], arr[minPos] = arr[minPos], arr[maxPos]

t = arr[maxPos]
arr[maxPos] = arr[minPos]
arr[minPos] = t

print(' '.join(map(str, arr)))