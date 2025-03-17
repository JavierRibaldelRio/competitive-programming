const fs = require('fs');


const sentidoGlobal = [[-1, 0], [0, 1], [1, 0], [0, -1]];

const transPos = (pos) => pos[0] + "-" + pos[1];


const guardMove = (initialPos, direccion, previousPositions, board) => {


    let sentido = sentidoGlobal[direccion]

    let [y, x] = initialPos;

    if (y + sentido[0] > board.length || y + sentido[0] < 0 || x + sentido[1] > board.length || x + sentido[1] < 0) {

        return
    }

    try {
        while (board[y + sentido[0]][x + sentido[1]] !== "#") {

            y += sentido[0];
            x += sentido[1];


            previousPositions.add(transPos([y, x]));

            if (board[y + sentido[0]][x + sentido[1]] === undefined) {
                return
            }
        }

    }
    catch {
        return;
    }


    guardMove([y, x], (direccion + 1) % 4, previousPositions, board);


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

    guardMove(initialPos, 0, squares, board);

    console.log('intialPos :>> ', squares.size);





});


