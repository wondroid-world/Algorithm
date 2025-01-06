fun main() {
    val T = readln().toInt()
    val results = mutableListOf<String>()
    repeat(T) {
        val (H, W, N) = readln().split(" ").map { it.toInt() }
        var count = 0
        for (w in 1..W) {
            for (h in 1..H) {
                count++
                if (count == N) {
                    if (w < 10) results.add("${h}0${w}") else results.add("${h}${w}")
                }
            }
        }
    }
    println(results.joinToString("\n"))
}