const person = {
    name: "John",
    age: 30,
    city: "New York"
  };
  const jsonString = JSON.stringify(person); //change a JS object into a JSON(string)
  console.log(jsonString); // Outputs: '{"name":"John","age":30,"city":"New York"}'


const jsonpure = '{"name":"John","age":30,"city":"New York"}'; //this is a JSON(string)
const jsonJSobject = JSON.parse(jsonpure); //parse a JSON to a javascript object(jsonJSobject is a JS object from jsonpure(JSON string))
console.log(jsonJSobject);
console.log(jsonJSobject.age);

