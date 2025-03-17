const fs = require('fs');

let posiblePlaces = new Set();
let casillasProbadas = new Set();

const sentidoGlobal = [[-1, 0], [0, 1], [1, 0], [0, -1]];

const transPos = (pos) => pos[0] + "-" + pos[1];


const guardMove = (initialPos, direccion, previousTurns, board) => {
    let [y, x] = initialPos;
    let sentido = sentidoGlobal[direccion]

    while (board[y + sentido[0]] !== undefined && board[y + sentido[0]][x + sentido[1]] !== undefined) {
        sentido = sentidoGlobal[direccion]


        while (board[y + sentido[0]][x + sentido[1]] !== "#") {

            if (board[y + sentido[0]] === undefined || board[y + sentido[0]][x + sentido[1]] === undefined) {
                return 0;
            }

            y += sentido[0];
            x += sentido[1];
            previousTurns.add(transPos([y, x]));


        }

        direccion = (direccion + 1) % 4
    }


}

const guardMoveOb = (initialPos, direccion, previousTurns, board) => {
    let [y, x] = initialPos;
    let sentido = sentidoGlobal[direccion]

    let count = 0;

    while (board[y + sentido[0]] !== undefined && board[y + sentido[0]][x + sentido[1]] !== undefined) {
        sentido = sentidoGlobal[direccion]


        while (board[y + sentido[0]][x + sentido[1]] !== "#") {

            y += sentido[0];
            x += sentido[1];



            if (board[y + sentido[0]] === undefined || board[y + sentido[0]][x + sentido[1]] === undefined) {
                break;
            }
        }



        direccion = (direccion + 1) % 4
    }

    return count;

}




fs.readFile('input', 'utf8', (err, data) => {


    const board = data.split("\n")
        .map(x => x.split(""));


    // Gets the initial post of the guards
    let initialPos;

    for (let i = 0; i < board.length; i++) {

        if (board[i].indexOf("^") !== -1) {
            initialPos = [i, board[i].indexOf("^")];
            break;
        }
    }

    let squares = new Set();

    squares.add(transPos(initialPos));

    guardMoveOb(initialPos, 0, squares, board);

    console.log('intialPos :>> ', squares.size);

});
