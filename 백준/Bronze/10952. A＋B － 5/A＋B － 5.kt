fun main() {
    val result = mutableListOf<Int>()
    while (true) {
        val (A, B) = readln().split(" ").map { it.toInt() }
        if (A == 0 && B == 0) break
        result.add(A + B)
    }
    println(result.joinToString("\n"))
}