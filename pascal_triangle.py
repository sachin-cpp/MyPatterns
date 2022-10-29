n = 10
# iterarte upto n
for i in range(n):
# adjust space
    print(' '*(n-i), end='')
# compute power of 11
    print(' '.join(map(str, str(11**i))))