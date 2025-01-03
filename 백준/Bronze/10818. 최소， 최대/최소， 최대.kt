fun main() {
    val N = readln().toInt()
    val numbers = readln().split(" ").map { it.toInt() }
    println("${numbers.min()} ${numbers.max()}")
}