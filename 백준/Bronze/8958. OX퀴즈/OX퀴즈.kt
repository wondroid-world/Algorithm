fun main() {
    val T = readln().toInt()
    val result = mutableListOf<Int>()

    for (t in 1..T) {
        var score = 0
        val problems = readln()
        var plusScore = 0
        for (index in 0 until problems.length) {
            when (problems[index]) {
                'O' -> {
                    plusScore++
                    score += plusScore
                }

                'X' -> {
                    plusScore = 0
                }
            }
        }
        result.add(score)
    }

    println(result.joinToString("\n"))
}