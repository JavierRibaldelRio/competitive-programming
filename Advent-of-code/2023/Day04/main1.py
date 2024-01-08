from functools import reduce

lineas = [line.rstrip() for line in open('Advent-of-code/2023/Day04/cards.txt')]




def eliminar_headers(stri):
    x= list(map(lambda x:x.split(" "),stri.split(':')[1].split('|')))

    print(x)
    return list(map(lambda y: list(filter(lambda z: z != '',y)),x))

list(map(eliminar_headers,lineas))