
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
const todoBien = arr => (diferenciaValida(arr) && comprobarDosSentidos(arr))

const fs = require('fs');

fs.readFile('input', 'utf8', (err, data) => {
    if (err) {
        console.error(err);
        return;
    }

    const array = data.split("\n").map(x => x.split(" ").map(Number));

    for (let i = 0; i < array.length; i++) {
        fila = array[i]

        if (todoBien(fila)) { count++; continue; }

        else {

            for (let j = 0; j < fila.length; j++) {

                let cp = [...fila];

                cp.splice(j, 1);

                if (todoBien(cp)) {
                    count++;
                    j = fila.length + 2;
                }

            }
        }




    }

    console.log(count)


});



