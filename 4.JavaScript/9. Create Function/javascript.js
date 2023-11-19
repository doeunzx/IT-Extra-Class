
// This is the first function;
function fun() {
    // console.log("This is lesson of Function");


    const num1 = 25;
    const num2 = 20;

    // return 20+30;

    return num1 * num2 ;
}
console.log (fun());
fun();






function fun2 (num3, num4) {
    return num3 * num4
}
console.log (fun2(44,44));
console.log ( fun2(55,88));
console.log ( fun2(10,10));

const n1 = 10;
const n2 = 20; 
console. log (fun2(n1,n2));




const arr = [2005];
function fun3 (db, current){
   return db - current + " years old.";
}

console.log (fun3(2023,2003));
console. log (fun3(2023,arr[0]));

const cuurentYear = 2023;
const birthYear = arr[0];

console. log (fun3(cuurentYear, birthYear));


// console.log (fun());









// This is ES6 function;


// const fun1 =() =>{
//     return 20 + 22;
// }

const fun1 = () =>  20 - 7;
console.log (fun1());
