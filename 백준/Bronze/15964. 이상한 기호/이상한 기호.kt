fun main() {
    val (A, B) = readln().split(" ").map { it.toLong() }
    val result = (A + B) * (A - B)
    println(result)
}
