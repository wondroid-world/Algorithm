fun main() {
    val hwan = readln().removeSuffix("h").split("").size
    val doctor = readln().removeSuffix("h").split("").size
    val result = if (hwan >= doctor) "go" else "no"
    println(result)
}