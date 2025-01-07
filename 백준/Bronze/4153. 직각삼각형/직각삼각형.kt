fun main() {
    while (true) {
        val (a, b, c) = readln().split(" ").map { it.toInt() }.sorted()
        if (a == 0 && b == 0 && c == 0) break
        val result = when {
            a * a + b * b == c * c -> "right"
            else -> "wrong"
        }
        println(result)
    }
}