fun main() {
    val numbers = readln().split(" ").map { it.toInt() * it.toInt() }
    println(numbers.sum() % 10)
}