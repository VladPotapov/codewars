var arr1 = [1, 3, 5, 2];
var arr2 = [2, 4, 6, 1];

//my function
function arrayPlusArray(arr1, arr2) {
    var num1 = 0;
    var num2 = 0;

    for (var i = 0; i < arr1.length; i++) {
        num1 += arr1[i];
    }

    for (var i = 0; i < arr2.length; i++) {
        num2 += arr2[i];
    }

    return num1 + num2;
}

//codewars
function arrayPlusArray2(arr1, arr2) {
    //соединяем 2 массива
    let arr = [...arr1, ...arr2];
    //складываем значения
    return arr.reduce((a, b) => a + b);
}

var number = arrayPlusArray2(arr1, arr2);

var text = document.getElementById("text");
text.innerHTML = number;