const fs = require('fs');

const addToMap = (map, before, after) => {
    let arr = map.get(before);

    if (!arr) {

        map.set(before, [after]);
    }
    else {
        arr.push(after);
    }
}


const verificarOrden = (antes, despues, caso) => {

    console.log('caso :>> ', caso);

    for (let i = 0; i < caso.length; i++) {
        // Mira que todas esten despues

        // Array de todos losque tienen que ir antes que 
        let arrPrece = despues.get(caso[i]);


        if (arrPrece == undefined) {
            continue;
        }
        for (let j = i + 1; j < caso.length; j++) {

            if (arrPrece.includes(caso[j])) {
                return 0;
            }
        }



    }

    console.log('li :>>' + caso[Math.floor(caso.length / 2)]);

    return caso[Math.floor(caso.length / 2)];
}

fs.readFile('input', 'utf8', (err, data) => {


    let [order, cases] = data.split("\n\n");

    order = order.split("\n").map(x => x.split("|").map(Number));
    cases = cases.split("\n").map(x => x.split(",").map(Number));



    const after = new Map();
    const before = new Map();

    for (let ord of order) {

        // after
        addToMap(after, ord[0], ord[1]);
        addToMap(before, ord[1], ord[0]);

    }

    let sumaMedios = 0;

    for (let caso of cases) {


        sumaMedios += verificarOrden(after, before, caso);
    }

    console.log('sumaMedios :>> ', sumaMedios);

});


