import re
from functools import reduce

lector = open("Advent-of-code/2023/Day03/engine_parts.txt", "r")

engine = lector.readlines()


# Añade fila superior e inferior


def remove_break_line(stri):
    return stri.strip("\n")


def add_begining_final_dot(stri):
    return "." + stri + "."


def split_by_non_number(stri):
    arr = re.split(r"\D+", stri)

    arr.pop()
    arr.pop(0)

    return arr


def sum_linea(ori, fila):
    for n in fila:
        ori += int(n)
    return ori


engine_transformado = list(
    map(add_begining_final_dot, list(map(remove_break_line, engine)))
)

engine_transformado.append("." * len(engine_transformado[0]))
engine_transformado.insert(0, "." * len(engine_transformado[0]))

# suma
engine_numbers_only = list(map(split_by_non_number, engine_transformado))

suma = reduce(sum_linea, engine_numbers_only, 0)

# suma todos los números


for i in range(0, len(engine_numbers_only)):
    for j in range(0, len(engine_numbers_only[i])):
        engine_transformado[i].index(engine_numbers_only[i][j])


print(engine_numbers_only)
