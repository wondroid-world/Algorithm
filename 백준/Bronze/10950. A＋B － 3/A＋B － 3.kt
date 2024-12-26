fun main() {
    val N = readln().toInt()
    var n = 0
    val result = mutableListOf<Int>()
    while (n < N) {
        val (A, B) = readln().split(" ").map { it.toInt() }
        result.add(A + B)
        n++
    }
    println(result.joinToString("\n"))
}