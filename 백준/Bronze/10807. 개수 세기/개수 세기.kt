fun main() {
    val N = readln().toInt()
    val numbers = readln().split(" ").map { it.toInt() }
    val v = readln().toInt()
    val count = numbers.filter { it == v }.size
    println(count)
}