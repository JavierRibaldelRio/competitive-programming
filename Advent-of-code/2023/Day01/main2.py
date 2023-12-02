from functools import reduce

lector = open("Advent-of-code/2023/Day01/codigos.txt", "r")
lineas = lector.readlines()

numeros = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]


def sum(suma, frase):
    primer_numero_escrito = ["one", len(frase)]
    ultimo_numero_escrito = ["one", -1]

    for n in numeros:
        index = frase.find(n)
        print(n, index)
        if primer_numero_escrito[1] > index and index != -1:
            primer_numero_escrito = [n, index]
        rindex = frase.rfind(n)
        if ultimo_numero_escrito[1] < rindex:
            ultimo_numero_escrito = [n, rindex]

    print(
        primer_numero_escrito[0],
        frase.replace(
            primer_numero_escrito[0], str(numeros.index(primer_numero_escrito[0]) + 1)
        ),
    )
    for letra in frase.replace(
        primer_numero_escrito[0], str(numeros.index(primer_numero_escrito[0]) + 1)
    ):
        if letra.isdigit():
            num1 = letra
            break
    print(
        frase.replace(
            ultimo_numero_escrito[0], str(numeros.index(ultimo_numero_escrito[0]) + 1)
        )
    )
    for letra in reversed(
        frase.replace(
            ultimo_numero_escrito[0], str(numeros.index(ultimo_numero_escrito[0]) + 1)
        )
    ):
        if letra.isdigit():
            num2 = letra
            break

    return suma + int(num1 + num2)


print(reduce(sum, lineas, 0))
