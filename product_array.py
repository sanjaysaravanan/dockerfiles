arr = [10, 3, 5, 6, 2]
arr2 = []
for i in range(len(arr)):
    x, y = 0, len(arr) - 1
    product = 1
    while( x < y):
        if i != x and i != y:
            product *= arr[x]
            product *= arr[y]
            x += 1
            y += 1
        if i == x:
            x += 1
        if i == y:
            y -= 1
        
    arr2.append(product)    

print(arr2)