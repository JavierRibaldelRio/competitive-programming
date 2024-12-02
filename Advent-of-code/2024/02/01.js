
var count = 0;



const diferenciaValida = (arr) => {

    for (let j = 0; j < arr.length - 1; j++) {

        let resul = Math.abs(arr[j] - arr[j + 1])

        if ((resul < 1 || resul > 3)) {
            return false;
        }
    }

    return true;
}


const comrpobarSentido = arr => {


    for (let j = 0; j < arr.length - 1; j++) {

        if (arr[j] > arr[j + 1]) {
            return false
        }
    }

    return true;


}

const comprobarDosSentidos = arr => (comrpobarSentido(arr) || comrpobarSentido(arr.reverse()));


const fs = require('fs');

fs.readFile('input', 'utf8', (err, data) => {
    if (err) {
        console.error(err);
        return;
    }


    const array = data.split("\n").map(x => x.split(" ").map(Number));

    // console.log('array :>> ', array);

    for (let i = 0; i < array.length; i++) {
        fila = array[i]

        // Mirar si esta'bien la segund acondición


        if (!diferenciaValida(fila)) {
            continue;
        }

        // Comprobar que el orden es correcto

        if (!comprobarDosSentidos(fila)) {
            continue;
        }

        count++;



    }

    console.log(count)


});



console.log(comprobarDosSentidos("13 10 9 7 5 3".split(" ")))