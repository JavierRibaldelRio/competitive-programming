import sys
import math

sumaT = 0

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue

    ori = int(line)
    longi = int(math.log10(ori)) + 1 if ori > 0 else 1

    # Primer bucle
    buscarMax1 = ori // 10
    max1 = -1
    max2 = -1
    p1 = 1
    p1max = 1
    p2 = 0

    while p1 < longi:
        posibleMax = buscarMax1 % 10

        if posibleMax >= max1:
            max1 = posibleMax
            p1max = p1

        p1 += 1
        buscarMax1 //= 10

    # Segundo bucle
    buscarMax2 = ori
    while p2 < p1max and max2 != 9:
        posibleMax2 = buscarMax2 % 10

        if posibleMax2 > max2:
            max2 = posibleMax2

        p2 += 1
        buscarMax2 //= 10

    sumaT += max1 * 10 + max2

print(sumaT)
