'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');
    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    
    let n = Number(readLine());
    let words = []
    for(let i = 0; i < n; i++) {
        words[i] = readLine();
    }
    
    let result = 0
    for(let i = 0; i < n - 1; i++) {
        let idx = readLine().split(' ').map(Number);
        result = idx[0] - 1
        words[idx[0] - 1] += words[idx[1] - 1]
        words[idx[1] - 1] = ""
    }
    
    console.log(words[result])
    //readLine().split(' ').map(Number);
}