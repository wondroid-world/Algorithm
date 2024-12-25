fun main() {
    val (A, B) = readln().split(" ").map { it.toInt() }
    val result = when {
        A > B -> ">"
        A < B -> "<"
        else -> "=="
    }
    println(result)
}