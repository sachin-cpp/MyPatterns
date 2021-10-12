# Generating random triangle pattern
from random import random
rows=6;
for i in range(rows):
    for j in range(i):
        print(int(random()*10),end=" ")
    print(" ")