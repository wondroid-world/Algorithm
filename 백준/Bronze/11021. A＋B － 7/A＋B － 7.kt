fun main() {
    val N = readln().toInt()
    var i = 1
    repeat(N) {
        val (A, B) = readln().split(" ").map { it.toInt() }
        println("Case #${i}: ${A + B}")
        i++
    }
}