const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let inputLines = [];

rl.on('line', (line) => {
  inputLines.push(line.trim());

  // When we have 2 lines: n and the array
  if (inputLines.length === 2) {
    let n = parseInt(inputLines[0]);
    let arr = inputLines[1].split(' ').map(Number);

    // Initialize max, min, and their positions
    let max = arr[0], min = arr[0];
    let maxPos = 0, minPos = 0;

    for (let i = 1; i < n; i++) {
      if (arr[i] > max) {
        max = arr[i];
        maxPos = i;
      }
      if (arr[i] < min) {
        min = arr[i];
        minPos = i;
      }
    }

    // Swap max and min
    let temp = arr[minPos];
    arr[minPos] = arr[maxPos];
    arr[maxPos] = temp;

    // Output result
    console.log(arr.join(' '));

    rl.close();
  }
});
