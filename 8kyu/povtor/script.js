function povtor(a, b) {
    arr = [...a, ...b];
    return arr.reduce((a, b) => a + b);
}

povtor();