const fs = require('fs');


const mirarSentido = (arr, yInicial, xInicial, sX = 0, sY = 0) => {
    try {
        if (
            (arr[yInicial + sY][xInicial + sX] === "M"
                && arr[yInicial - sY][xInicial - sX] === "S"
                && arr[yInicial + sY][xInicial - sX] === "S"
                && arr[yInicial - sY][xInicial + sX] === "M")
            ||
            (arr[yInicial + sY][xInicial + sX] === "M"
                && arr[yInicial - sY][xInicial - sX] === "S"
                && arr[yInicial + sY][xInicial - sX] === "M"
                && arr[yInicial - sY][xInicial + sX] === "S")
        ) {
            return true;
        }
    }
    catch {
        return false;
    }





    return false;
}

const buscarXmas = (arr, y, x) => {


    return mirarSentido(arr, y, x, 1, 1)
        || mirarSentido(arr, y, x, 1, -1)
        || mirarSentido(arr, y, x, -1, 1)
        || mirarSentido(arr, y, x, -1, -1);



}

fs.readFile('input', 'utf8', (err, data) => {


    const arr = data.split("\n")
        .map(x => x.split(''));

    let contador = 0;
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr[0].length; j++) {

            if (arr[i][j] === "A") {

                contador += buscarXmas(arr, i, j);

            }
        }
    }

    console.log(contador);


});


