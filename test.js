// const person = {
//     name: "John",
//     age: 30,
//     city: "New York"
//   };
//   const jsonString = JSON.stringify(person);
//   console.log(jsonString); // Outputs: '{"name":"John","age":30,"city":"New York"}'
const jsonpure = '{"name":"John","age":30,"city":"New York"}';
const jsonJSobject = JSON.parse(jsonpure); //parse a JSON to a javascript object
console.log(jsonJSobject);
console.log(jsonJSobject.age);

