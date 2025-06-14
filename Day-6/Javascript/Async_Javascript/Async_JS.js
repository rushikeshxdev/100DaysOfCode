// 1. setTimeout Example
console.log("Start");

setTimeout(() => {
  console.log("Runs after 2 seconds");
}, 2000);

console.log("End");

// 2. Promises Example
let promise = new Promise((resolve, reject) => {
  let success = true;

  setTimeout(() => {
    if (success) resolve("Promise resolved!");
    else reject("Promise rejected!");
  }, 1500);
});

promise
  .then(msg => console.log(msg))
  .catch(err => console.log(err));
