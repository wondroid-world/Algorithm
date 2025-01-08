fun main() {
    val N = readln().toInt()
    val scores = readln().split(" ").map { it.toInt() }
    val M = scores.max()
    val newScores = scores.map { it.toDouble() / M * 100 }
    println(newScores.sum() / N.toDouble())
}
