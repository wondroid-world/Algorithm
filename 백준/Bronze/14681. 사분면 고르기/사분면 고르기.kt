fun main() {
    val x = readln().toInt()
    val y = readln().toInt()
    val result = when {
        x > 0 && y > 0 -> 1
        x < 0 && y > 0 -> 2
        x < 0 && y < 0 -> 3
        else -> 4
    }
    println(result)
}
