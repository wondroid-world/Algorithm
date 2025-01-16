fun main() {
    val n = readln().toInt()
    val numbers = MutableList(n) { index -> index + 1 }
    println(numbers.sum())
}