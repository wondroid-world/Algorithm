fun main() {
    val T = readln().toInt()
    val result = mutableListOf<String>()
    for (t in 1..T) {
        val (R, S) = readln().split(" ")
        var P = ""
        for (s in S) {
            repeat(R.toInt()) {
                P += s
            }
        }
        result.add(P)
    }
    println(result.joinToString("\n"))
}
