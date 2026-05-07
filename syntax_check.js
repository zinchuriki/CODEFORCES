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
  let i = 0, j = 0;

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
