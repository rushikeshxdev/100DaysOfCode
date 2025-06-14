let count = 0;
const countDisplay = document.getElementById('count');
const incBtn = document.getElementById('increment');
const decBtn = document.getElementById('decrement');
const resetBtn = document.getElementById('reset');

function updateDisplay() {
  countDisplay.textContent = count;
  countDisplay.style.transform = "scale(1.1)";
  setTimeout(() => {
    countDisplay.style.transform = "scale(1)";
  }, 150);
}

incBtn.addEventListener('click', () => {
  count++;
  updateDisplay();
});

decBtn.addEventListener('click', () => {
  count--;
  updateDisplay();
});

resetBtn.addEventListener('click', () => {
  count = 0;
  updateDisplay();
});
