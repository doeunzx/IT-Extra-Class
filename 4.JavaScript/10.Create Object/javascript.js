const objects = {
name : "Sidoeun",
age : 21,
Relationship : true,
playing : function (){
    console. log("Yes, I want play football!");
}
// This call ES6.
// playing (){
//     console. log("Yes, I want play football!");
// }
}

console. log(objects.Relationship);
objects.playing();



const person = {
    firsrName : "Vet",
    lastName : "Sidoeun",
    age : 21,
    studying : true,
    work : function () {
        "Yes I am working"
    },
    array: [21,22,23],
}
person.name = "Sidoeun";
console.log(person.firstName);

console.log (person.array[0])
console.log (person.array[1])
console.log (person.array[2])



const array1 = [
    {name:"Sidoeun", age:21,id:36, },
    {name:"Sidoeun", age:22,id:37, },
    {name:"Sidoeun", age:23,id:38, },
    {name:"Sidoeun", age:24,id:39, },
]
console.log (array1[0].age)