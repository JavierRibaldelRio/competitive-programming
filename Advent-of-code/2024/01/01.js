
const fs = require('fs');

fs.readFile('input', 'utf8', (err, data) => {
    if (err) {
        console.error(err);
        return;
    }


    const array = data.replace(/\n/g, "   ").split("   ").map(Number);

    const rightC = array.filter((x, i) => i % 2 != 0).sort()

    const leftC = array.filter((x, i) => i % 2 == 0).sort();

    let sum = 0;
    for (let i = 0; i < leftC.length; i++) {

        let xl = leftC[i]

        sum += xl * rightC.filter(x => x == xl).length;
    }

    console.log(sum);

});
