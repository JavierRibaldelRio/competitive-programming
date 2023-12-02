from functools import reduce

lector = open("Advent-of-code/2023/Day02/juegos.txt", "r")

# RGB
juegos = lector.readlines()


def buscar_numeros(frase):
    t = "0"
    for l in frase:
        if l.isdigit():
            t = t + l

    print(t)
    return int(t)


def parsear_game(game):
    game = game.split(":")[1]

    round = game.split(";")

    def separate_colors(turno):
        colors = turno.split(",")

        separacion_colores = [0, 0, 0]

        for color in colors:
            if "d" in color:
                print(color)
                separacion_colores[0] = buscar_numeros(color)

            elif "g" in color:
                separacion_colores[1] = buscar_numeros(color)

            elif "b" in color:
                separacion_colores[2] = buscar_numeros(color)
        return separacion_colores

    return list(map(separate_colors, round))


def comprobar_posibilidad(rondas):
    for turno in rondas:
        if turno[0] > 12 or turno[1] > 13 or turno[2] > 14:
            return False

    return True


list_juegos = list(map(parsear_game, juegos))

total = 0

for i in range(0, len(list_juegos)):
    if comprobar_posibilidad(list_juegos[i]):
        total += i + 1

print(total)
