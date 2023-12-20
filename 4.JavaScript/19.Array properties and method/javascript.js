// length សម្រាប់​មើលចំនួន​ Array Item 
// concat()  បូក  Item Array
// Reverse បញ្រ្ចាស់ Item order
// unshift() បន្ថែម Item ខាងដើម
// shift() ដក item​​ ខាងដើម
// push() បន្ថែម  Item ខាងចុង
// pop() ដក Item ខាងចុង
// splice(index, items) ដក Items array និងប៉់ះពាល់ ដល់ original array


// const name =["a","b","c","d"];
// name.unshift("h");
// name.shift();
// name.push("f");
// name.pop();
// console.log(name);
// const newName=["e","f","g","h"];
// const allName=name.concat(newName);
// console.log(allName.reverse());
// console.log(allName.un());
// console.log(allName);
const name =["a","b","c","d"];
const newName = name.splice (0,2);
console.log(newName);
console.log(name);