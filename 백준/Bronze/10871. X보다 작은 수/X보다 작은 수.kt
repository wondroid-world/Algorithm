fun main() {
    val (N, X) = readln().split(" ").map { it.toInt() }
    val numbers = readln().split(" ").map { it.toInt() }
    val results = mutableListOf<Int>()

    for (number in numbers) {
        if (number < X) results.add(number)
    }
    println(results.joinToString(" "))
}
