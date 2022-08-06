let defaultName = "JavaScript";

function sayHallo(name) {
    if (name == null) {
        alert("Hello, " + defaultName + "!");
    } else {
        alert("Hello" + name + "!");
    }
}