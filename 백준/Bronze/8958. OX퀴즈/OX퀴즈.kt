fun main() {
    val T = readln().toInt()
    val results = List(T) { calculateScore(readln()) }
    println(results.joinToString("\n"))
}

fun calculateScore(problems: String): Int {
    var score = 0
    var plusScore = 0
    for (problem in problems) {
        when (problem) {
            'O' -> {
                plusScore++
                score += plusScore
            }
            'X' -> {
                plusScore = 0
            }
        }
    }
    return score
}