from functools import reduce

lector = open("Advent-of-code/2023/Day02/juegos.txt", "r")

# RGB
juegos = lector.readlines()


def buscar_numeros(frase):
    t = "0"
    for l in frase:
        if l.isdigit():
            t = t + l
    return int(t)


def parsear_game(game):
    game = game.split(":")[1]

    round = game.split(";")

    def separate_colors(turno):
        colors = turno.split(",")

        separacion_colores = [0, 0, 0]

        for color in colors:
            if "d" in color:
                separacion_colores[0] = buscar_numeros(color)

            elif "g" in color:
                separacion_colores[1] = buscar_numeros(color)

            elif "b" in color:
                separacion_colores[2] = buscar_numeros(color)
        return separacion_colores

    return list(map(separate_colors, round))


def potencia_ronda(ronda):
    max = [-1, -1, -1]
    for turno in ronda:
        for i in range(0, 3):
            if max[i] < turno[i]:
                max[i] = turno[i]
    return max[0] * max[1] * max[2]


list_juegos = list(map(parsear_game, juegos))

total = 0


for ronda in list_juegos:
    total += potencia_ronda(ronda)

print(total)
