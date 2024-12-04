const fs = require('fs');


const mirarSentido = (arr, yInicial, xInicial, sX = 0, sY = 0) => {

    let y = yInicial, x = xInicial;

    for (let letra of ["M", "A", "S"]) {

        x += sX;
        y += sY;

        if (y < 0 || x < 0 || y >= arr.length || x >= arr.length) {
            return 0
        }

        if (arr[y][x] !== letra) {
            return 0;
        }
    }



    return 1;
}

const buscarXmas = (arr, y, x) => {


    return mirarSentido(arr, y, x, 1, 0)        // Horizontal
        + mirarSentido(arr, y, x, -1, 0)        // Horizontal invertido
        + mirarSentido(arr, y, x, 0, 1)         // Vertical Arriba
        + mirarSentido(arr, y, x, 0, -1)        // Vertical Abajo
        + mirarSentido(arr, y, x, 1, 1)         // Diagonal Ascendente derecha
        + mirarSentido(arr, y, x, -1, -1)       // Diagonal Descendente Izquierda
        + mirarSentido(arr, y, x, -1, 1)        // Diagonal Ascendente izquierda
        + mirarSentido(arr, y, x, 1, -1);       // Diagonal Descendente dercha


}

fs.readFile('input', 'utf8', (err, data) => {


    const arr = data.split("\n")
        .map(x => x.split(''));

    let contador = 0;
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr[0].length; j++) {

            if (arr[i][j] === "X") {

                contador += buscarXmas(arr, i, j);

            }
        }
    }

    console.log(contador);


});


