/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
const mergeObjects = (obj1, obj2) => {
  const result = { ...obj1 };
  for (const key in obj2) {
    result[key] = obj2[key];
  }
  return result;
};

const compareIds = (id1, id2) => {
  if (id1 < id2) return -1;
  if (id1 > id2) return 1;
  return 0;
};

const join = function (arr1, arr2) {
  const sortById = (a, b) => a.id - b.id;
  arr1.sort(sortById);
  arr2.sort(sortById);

  const result = [];
  let i = 0,
    j = 0;

  while (i < arr1.length && j < arr2.length) {
    const comparison = compareIds(arr1[i].id, arr2[j].id);

    if (comparison < 0) {
      result.push(arr1[i++]);
    } else if (comparison > 0) {
      result.push(arr2[j++]);
    } else {
      result.push(mergeObjects(arr1[i++], arr2[j++]));
    }
  }

  result = result.concat(arr1.slice(i), arr2.slice(j));

  return result;
};

//Write your javascript code here

const butn = document.querySelectorAll("button");
let incm = 0;
butn.addEventListener("click", () => {
  let a = document.querySelectorAll("select");
  let b = document.querySelector("#amount");
  let c = document.querySelectorAll("#description");
  let d = document.querySelectorAll("form");
  let p = document.querySelectorAll("p");

  if (b.value === "" || c.value === "") {
    alert("sorry");
    return;
  }

  if (a.value == "income") incm += b.value;
  else incm -= b.value;
  d.reset();

  p.textContent = `Total Budget: $${incm}`;
});

let amount = 0;
let arr = JSON.parse(localStorage.getItem("expenses")) || [];
function addExpense() {
  const expname = document.querySelector("#expenseName");
  const amountInput = document.querySelector("#amount");
  const date = document.querySelector("#date");

  arr.push({
    name: expname.value,
    amount: amountInput.value,
    date: date.value,
  });
  amount += Number(amountInput.value);
  const e = document.querySelector("#totalAmount");
  e.textContent = amount;

  localStorage.setItem("expenses", JSON.stringify(arr));

  displayExpenses();
}

function displayExpenses() {
  const ul = document.querySelector("#expenseList");

  ul.innerHTML = "";

  arr.forEach((item) => {
    const li = document.createElement("li");

    li.textContent = `${item.name} - $${item.amount} - ${item.date}`;

    ul.appendChild(li);
  });
}
