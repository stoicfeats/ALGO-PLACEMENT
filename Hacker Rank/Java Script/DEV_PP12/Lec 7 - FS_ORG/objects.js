// key -> string, number
// object -> key : value pair

let obj = {}
let cap = {
    name : "Steve",
    // space in key 
    "last name" : "Rogers",
    friends : ['Peter','Tony','Bruce'],
    age : 34,
    isAvenger : true,
    // function inside an object

    sayHi : function(){
        console.log("Hey, everyone");
    },
    // number as a key 
    10: "My id number is 10",
    // object in object
    address : {
        state : "Ney York", 
        city : 'NYC'
    },
}

// print 
console.log(obj);
console.log(cap);

//access ->
console.log("First Name : ",cap.name);
console.log("Friend : ",cap.friends[0]);
console.log("City : ",cap.address.city);
console.log("is avenger : ",cap.isAvenger);

// two edge cases
// 1. if key contains spaces
// 2. if key is a number

console.log("last name :", cap["last name"]);
console.log("10 : ", cap[10]);


