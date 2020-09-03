//my code
function fakeBin(x) {
    j = "";
    for (var i = 0; i < x.length; i++) {
        if (parseInt(x[i]) < 5) {
            j += '0';
        }
        else {
            j += '1';
        }
    }

    return j;
}

//codewars
function fakeBin2(x) {
    return x.split('').map(n => n < 5 ? 0 : 1).join("");
}

function fakeBin3(x) {
    return x.replace(/\d/g, d => d < 5 ? 0 : 1);
}

function fakeBin4(x) {
    return x.replace(/[0-4]/g, "0").replace(/[5-9]/g, "1");
}

function fakeBin5(x) {
    return x.replace(/./g, d => + (d >= 5));
}

fakeBin5("1111571");