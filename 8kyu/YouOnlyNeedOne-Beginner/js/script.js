//my code
function check(a, x) {
    for (var i = 0; i < a.length; i++) {
        if (a[i] == x) {
            return true;
        }
    }

    return false;
}

//codewars
function check2(a, x) {
    a.includes(x);   //вернёт true или false;
}
