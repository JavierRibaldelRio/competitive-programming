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


const corregir = (antes, caso) => {

    let cpCaso = [...caso];

    const compareTo = (a, b) => {

        const elemntosPrecedenA = antes.get(a);
        if (elemntosPrecedenA === undefined) {
            return 0
        }

        if (elemntosPrecedenA.includes(b)) {

            return +1;
        }

        return -1;
    };

    cpCaso.sort(compareTo);


    return cpCaso[Math.floor(cpCaso.length / 2)];
}

const verificarOrden = (antes, caso) => {

    console.log('caso :>> ', caso);

    for (let i = 0; i < caso.length; i++) {
        // Mira que todas esten despues

        // Array de todos losque tienen que ir antes que 
        let arrPrece = antes.get(caso[i]);


        if (arrPrece == undefined) {
            continue;
        }
        for (let j = i + 1; j < caso.length; j++) {

            if (arrPrece.includes(caso[j])) {
                // Si lo hay, lo corregimos
                return corregir(antes, caso);
            }
        }



    }


    // Si no hay ningun error, no la sumamos
    return 0;
}

fs.readFile('input', 'utf8', (err, data) => {


    let [order, cases] = data.split("\n\n");

    order = order.split("\n").map(x => x.split("|").map(Number));
    cases = cases.split("\n").map(x => x.split(",").map(Number));



    const after = new Map();

    for (let ord of order) {

        // after
        addToMap(after, ord[1], ord[0]);

    }

    let sumaMedios = 0;

    for (let caso of cases) {


        sumaMedios += verificarOrden(after, caso);
    }

    console.log('sumaMedios :>> ', sumaMedios);

});


