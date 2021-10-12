#Parabolic pattern
rows=10
b=rows
for i in range(1,rows):
    for j in range(1,100):
        if j==b*b:
            print("*", end="")
        else:
         print(" ",end="")
    b-=1;
    print()