fun main() {
    val N = readln().toInt()
    val numbers = mutableListOf<Int>()

    repeat(N) {
        numbers.add(readln().toInt())
    }
    println(numbers.sorted().joinToString("\n"))
}