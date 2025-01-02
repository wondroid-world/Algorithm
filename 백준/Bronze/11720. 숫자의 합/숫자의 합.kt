fun main() {
    val N = readln().toInt()
    val result = readln().split("").filter { it.isNotEmpty() }.map { it.toInt() }.sum()
    println(result)
}
