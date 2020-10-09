// my code
function getAverage(marks) {
    /**Метод reduce() применяет функцию reducer к каждому элементу массива (слева-направо), 
     * возвращая одно результирующее значение. */
    const reducer = (accumulator, currentValue) => accumulator + currentValue;
    return parseInt(marks.reduce(reducer) / marks.length);
}

// codewars
function getAverage2(marks) {
    return Math.floor(marks.reduce((sum, x) => sum + x) / marks.length);
}

const getAverage3 = marks => Math.floor(marks.reduce((a, b) => a + b) / marks.length);

let getAverage4 = marks => eval(marks.join('+')) / marks.length | 0;

document.write(getAverage4([3, 4, 4, 4, 5, 5]));