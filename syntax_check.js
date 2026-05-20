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

  let result = [];
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

const button = document.querySelector("button");
let incm = 0;
button.addEventListener("click", () => {
  const select = document.querySelector("select");
  const amountInput = document.querySelector("#amount");
  const description = document.querySelector("#description");
  const form = document.querySelector("form");
  const status = document.querySelector("p");

  if (!amountInput.value || !description.value) {
    alert("sorry");
    return;
  }

  const value = Number(amountInput.value);
  if (select.value == "income") incm += value;
  else incm -= value;
  form.reset();

  status.textContent = `Total Budget: $${incm}`;
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

// 19/05/2026
const headers = [
  "Roll No",
  "Name",
  "Gender",
  "1",
  "2",
  "3",
  "4",
  "5",
  "6",
  "7",
  "8",
  "9",
  "10",
  "11",
  "12",
  "13",
  "14",
  "15",
  "16",
  "17",
  "18",
  "19",
  "20",
  "21",
  "22",
  "23",
  "24",
  "25",
  "26",
  "27",
  "28",
  "29",
  "30",
];

const attendanceData = [
  {
    rollNo: 1,
    name: "John Doe",
    gender: "Male",
    attendance: [
      "P",
      "A",
      "P",
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 2,
    name: "Jane Smith",
    gender: "Female",
    attendance: [
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 3,
    name: "Alice Brown",
    gender: "Female",
    attendance: [
      "A",
      "A",
      "P",
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 4,
    name: "Bob Johnson",
    gender: "Male",
    attendance: [
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 5,
    name: "Charlie Lee",
    gender: "Male",
    attendance: [
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
      "A",
      "P",
      "P",
    ],
  },
  {
    rollNo: 6,
    name: "David Kim",
    gender: "Male",
    attendance: [
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 7,
    name: "Eva Green",
    gender: "Female",
    attendance: [
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 8,
    name: "Frank White",
    gender: "Male",
    attendance: [
      "A",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 9,
    name: "Grace Black",
    gender: "Female",
    attendance: [
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
  {
    rollNo: 10,
    name: "Henry Blue",
    gender: "Male",
    attendance: [
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
      "P",
    ],
  },
];

function showTableHead() {
  const thead = document.getElementById("tHead");
  thead.innerHTML = `
        <tr>
            ${headers.map((h) => `<th>${h}</th>`).join("")}
        </tr>
    `;
}

function showStudentData(parentEle, data, resultFlag = false) {
  parentEle.innerHTML = `
      ${data
        .map(
          (s) => `
          <tr>
              <td>${s.rollNo}</td>
              <td>${s.name}</td>
              <td>${s.gender}</td>
              ${
                resultFlag
                  ? `<td>${s.percentage}</td>`
                  : s.attendance
                      .map(
                        (a) => `
                          <td>${a}</td>
                      `,
                      )
                      .join("")
              }
          </tr> 
      `,
        )
        .join("")}
  `;
}

showTableHead();
showStudentData(document.getElementById("tBody"), attendanceData);

// complete this method, which will be called on button click
function findStudent() {
  const searchInput = document.querySelector("#searchInput");
  const value = searchInput?.value.trim() || "";
  const resultTBody = document.getElementById("resultTBody");

  if (!resultTBody) return;
  if (!value) {
    resultTBody.innerHTML = "";
    return;
  }

  const normalizedValue = value.toLowerCase();

  const obj = attendanceData
    .filter(
      (student) =>
        student.rollNo === Number(value) ||
        student.name.toLowerCase() === normalizedValue,
    )
    .map((student) => {
      const present = student.attendance.filter((day) => day === "P").length;
      const percentage = (present / student.attendance.length) * 100;

      return {
        name: student.name,
        rollNo: student.rollNo,
        gender: student.gender,
        percentage: `${percentage.toFixed(2)}%`,
      };
    });

  showStudentData(resultTBody, obj, true);
}
