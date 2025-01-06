fun main() {
    while (true) {
        val numbers = readlnOrNull() ?: break
        if (numbers.isNotEmpty()) {
            val (A, B) = numbers.split(" ").map { it.toInt() }
            println(A + B)
        }
    }
}