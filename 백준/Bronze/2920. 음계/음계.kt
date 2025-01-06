fun main() {
    val numbers = readln()
    val result = when (numbers) {
        "1 2 3 4 5 6 7 8" -> "ascending"
        "8 7 6 5 4 3 2 1" -> "descending"
        else -> "mixed"
    }
    println(result)
}
