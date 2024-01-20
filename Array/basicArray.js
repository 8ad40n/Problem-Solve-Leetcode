const cars = ["Saab", "Volvo", 10];
const fruits = ["Apple", "Mango"];
cars.push("Honda");
// Or,
// const cars = new Array("Saab", "Volvo", "BMW");


console.log("List of cars: ",cars);
//output: List of cars:  [ 'Saab', 'Volvo', 'BMW' ]

console.log("No of Cars: ",cars.length);
cars.pop();
console.log("Concat: ",cars.concat(fruits))
// const arr4 = arr1.concat(arr2, arr3);
console.log("Position:",cars.indexOf("Saab"));
// Array.lastIndexOf() is the same as Array.indexOf()
console.log("Incluse or not in true or false: ",cars.includes("Volvo"));

cars.sort();
console.log("After sorting:");
for (let i=0;i<cars.length;i++)
{
    console.log(cars[i]+" and it's length is: "+cars[i].length+" ans it's type is: "+typeof cars[i]);
}
// output:
        // Saab
        // Volvo
        // BMW

cars.reverse();
console.log("After reversing:");
for (let i=0;i<cars.length;i++)
{
    console.log(cars[i]);
}

console.log("Car at position 2 index: ",cars.at(2));
console.log("Car at position 3 index: ",cars[3]);


// const fruits = ["Banana", "Orange", "Apple", "Mango"];
// document.getElementById("demo").innerHTML = fruits.toString();
// Result: Banana,Orange,Apple,Mango

// Also,
// const cars = ["Saab", "Volvo", "BMW"];
// document.getElementById("demo").innerHTML = cars;

// Objects:
const person =
{
    firstName: "John",
    lastName: "Doe",
    age: 46
};
// document.getElementById("demo").innerHTML = person.firstName;
// output: John
console.log("Person's age: ",person.age);