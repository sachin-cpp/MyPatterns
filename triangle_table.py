n = int(input('Enter the number of rows in the pattern: '))
for i in range(0, n):
    for j in range(0, i + 1):
        print(i * j, end=' ')
    print()
    