// 1. Hello World
console.log("Hello, Rushikesh!");

// 2. Add two numbers
let a = 10, b = 20;
console.log("Sum:", a + b);

// 3. Even or Odd
let num = 7;
console.log(num % 2 === 0 ? "Even" : "Odd");

// 4. Factorial
function factorial(n) {
  let fact = 1;
  for (let i = 2; i <= n; i++) fact *= i;
  return fact;
}
console.log("Factorial of 5:", factorial(5));

// 5. Filter Even Numbers
let arr = [1, 2, 3, 4, 5];
let even = arr.filter(n => n % 2 === 0);
console.log("Even Numbers:", even);
