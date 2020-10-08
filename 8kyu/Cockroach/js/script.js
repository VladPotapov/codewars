/*function cockroachSpeed(s) {
    //Good Luck!
}*/
var result = document.getElementById("result");
//my code
function cockroachSpeed(s) {
    //Good Luck!
    return parseInt(s / 0.036);
}

//codewars
function cockroachSpeed2(s) {
    return Math.floor(s / 0.036);
}

function cockroachSpeed3(s) {
    return Math.floor((s * 100000) / 3600);
}

function cockroachSpeed4(s) {
    return Math.floor(s * 27.7777777778);
}

function cockroachSpeed5(s) {
    return Math.floor(s * 100000 / 3600);
}

function cockroachSpeed6(s) {
    return s / .036 | 0;
}

function cockroachSpeed7(s) {
    return s / 3.6e-2 ^ 0;
}

function cockroachSpeed8(s) {
    return Math.trunc(s * 27.778);
}
result.innerHTML = cockroachSpeed8(3);