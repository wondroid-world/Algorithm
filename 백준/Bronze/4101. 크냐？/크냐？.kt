fun main() {
    while (true) {
        val (A, B) = readln().split(" ").map { it.toInt() }
        if (A == 0 && B == 0) break
        if (A > B) println("Yes") else println("No")
    }
}