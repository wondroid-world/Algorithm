import kotlin.math.roundToInt

fun main() {
    val n = readln().toInt()

    if (n == 0) {
        println(0)
        return
    }

    val scores = mutableListOf<Int>()
    for (score in 1..n) {
        scores.add(readln().toInt())
    }
    val sortedScores = scores.sorted()
    val cutLimit = (n * 0.15).roundToInt()
    val result = sortedScores.slice(cutLimit.. sortedScores.size - (cutLimit + 1)).average().roundToInt()
    println(result)
}
