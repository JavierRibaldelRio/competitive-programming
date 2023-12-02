from functools import reduce

lector = open("Advent-of-code/2023/Day01/codigos.txt", "r")
lineas = lector.readlines()


def sum(suma, frase):
    for letra in frase:
        if letra.isdigit():
            num1 = letra
            break

    for letra in reversed(frase):
        if letra.isdigit():
            num2 = letra
            break

    return suma + int(num1 + num2)


print(reduce(sum, lineas, 0))
