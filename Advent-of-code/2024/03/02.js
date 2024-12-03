const fs = require('fs');


fs.readFile('input', 'utf8', (err, data) => {
    if (err) {
        console.error(err);
        return;
    }

    //Suprimer todo lo que no sea un dont i un 


    let copiaData = data;
    let newData = ""
    let enabled = true;

    while (true) {

        const buscar = enabled ? "don't()" : "do()";

        let indexAction = copiaData.indexOf(buscar)

        if (indexAction == -1) {
            if (enabled) {
                newData += copiaData.slice(0, copiaData.length - 1);
                break;
            }

        }

        if (enabled) {
            newData += copiaData.slice(0, indexAction);
        }

        copiaData = copiaData.slice(indexAction);

        // Invierte los valores de enablede
        enabled = !enabled;
    }




    const salida = newData
        .match(/mul\(\d+,\d+\)/g)
        .map(s => s.slice(4))
        .map(s => s.substring(0, s.length - 1))
        .map(s => s.split(",").
            map(Number))
        .reduce((i, a) => i + a[0] * a[1], 0);



    console.log('salida :>> ', salida);
});



