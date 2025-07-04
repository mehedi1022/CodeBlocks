// Node.js input using readline for VS Code / terminal use

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let lines = [];

rl.on('line', (input) => {
  lines.push(input);

  // Wait for two lines of input
  if (lines.length === 2) {
    const s = lines[0];
    const t = lines[1];

    // Print lengths
    console.log(`${s.length} ${t.length}`);

    // Print combined string
    console.log(`${s} ${t}`);

    rl.close();
  }
});
