fun main() {
    val (A, B) = readln().split(" ").map { it.toInt() }
    val result = (A + B) * (A - B)
    println(result)
}
