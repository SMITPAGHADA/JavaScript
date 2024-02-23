let a = document.getElementById("in1").value
let b = document.getElementById("in2").value
let c = document.getElementById("in3").value
let d = document.getElementById("in4").value

if (a =="") {
    document.getElementById("ans").innerHTML = "enter value"
} else {
    if (a < b && a < c && a < d) {
        document.getElementById("ans").innerHTML = a
    } else if (b < c && b < d) {
        document.getElementById("ans").innerHTML = b
    } else if (c < d) {
        document.getElementById("ans").innerHTML = c
    } else {
        document.getElementById("ans").innerHTML = d
    }
}