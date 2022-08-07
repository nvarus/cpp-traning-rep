let defaultName = "JavaScript";

function sayHallo(name) {
    if (name == null) {
        console.log("Hello, " + defaultName + "!");
    } else {
        console.log("Hello" + name + "!");
    }
}