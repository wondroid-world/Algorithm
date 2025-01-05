fun main() {
    val A = readln().toInt()
    val B = readln().toInt()
    val C = readln().toInt()

    val numbers = (A * B * C).toString().split("").filter { it.isNotEmpty() }.map { it.toInt() }
    val counts = mutableListOf<Int>()

    for (number in 0..9) {
        val count = numbers.filter { number == it }.size
        counts.add(count)
    }

    println(counts.joinToString("\n"))
}