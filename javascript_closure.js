function outerFunction(x) {
  let message = "JavaScript closure";

  function innerFunction(y) {
    return `${message}: ${x + y}`;
  }

  return innerFunction;
}

const addFive = outerFunction(5);

console.log(addFive(10));
