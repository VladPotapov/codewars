/**
 * function repeatStr (n, s) {  return '';}
 */

//my code
function repeatStr(n, s) {
    var copy_s = "";
    for (var i = 0; i < n; i++) {
        copy_s += s;
    }
    s = copy_s;
    return s;
}

function repeatStr2(n, s) {
    return s.repeat(n);
}

repeatStr3 = (n, s) => s.repeat(n);

function repeatStr4(n, s) {
    String.prototype.repeat = function (n) {
        return (new Array(n + 1)).join(this);
    };
    return s.repeat(n);
}

function repeatStr5(n, s) {
    return n > 1 ? s + repeatStr(--n, s) : s;
}

function repeatStr6(n, s) {
    var myStr = "";
    while (n > 0) {
        myStr += s;
        n--;
    }
    return myStr;
}

document.write(repeatStr6(3, "Music"));