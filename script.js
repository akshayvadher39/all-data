//---------------Q1..........

function fibonacci(n) {
  let a = 0, b = 1;
  let result = [];

  for (let i = 0; i < n; i++) {
    result.push(a);
    let next = a + b;
    a = b;
    b = next;
  }

  console.log(result.join(", "));
}

fibonacci(10);


//---------------Q2...........                                                


function sumOfDigits(num) {
  let sum = 0;

  while (num > 0) {
    sum += num % 10;
    num = Math.floor(num / 10);
  }

  return sum;
}

console.log(sumOfDigits(123));


//---------------Q3...........


function isPalindrome(num) {
  let original = num;
  let reverse = 0;

  while (num > 0) {
    reverse = reverse * 10 + (num % 10);
    num = Math.floor(num / 10);
  }

  return original === reverse ? "Palindrome" : "Not Palindrome";
}

console.log(isPalindrome(121));



//--------------Q4............


function factorial(n) {
  let fact = 1;

  for (let i = 1; i <= n; i++) {
    fact *= i;
  }

  return fact;
}

console.log(factorial(5));



//--------------Q5............


function reverseNumber(num) {
  let reverse = 0;

  while (num > 0) {
    reverse = reverse * 10 + (num % 10);
    num = Math.floor(num / 10);
  }

  return reverse;
}

console.log(reverseNumber(123));
