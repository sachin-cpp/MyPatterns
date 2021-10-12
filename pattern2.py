#Double triangle flag with curve pattern
rows=6;
for k in range(2):
 for i in range(rows):
     for j in range(i):
        if i==2 or j==2:
            if j==2:
                print(")", end=" ")
            else:
             print("(",end=" ")
        else:
           print("~",end=" ")
     print()