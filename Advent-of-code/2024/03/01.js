const fs = require('fs');


fs.readFile('input', 'utf8', (err, data) => {
    if (err) {
        console.error(err);
        return;
    }

    const salida = data
        .match(/mul\(\d+,\d+\)/g)
        .map(s => s.slice(4))
        .map(s => s.substring(0, s.length - 1))
        .map(s => s.split(",").
            map(Number))
        .reduce((i, a) => i + a[0] * a[1], 0);



    console.log('salida :>> ', salida);
});



