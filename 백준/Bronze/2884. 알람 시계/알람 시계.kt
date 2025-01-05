fun main() {
    val (H, M) = readln().split(" ").map { it.toInt() }
    if (M >= 45) {
        val newM = M - 45
        println("$H $newM")
    } else {
        when (H) {
            0 -> {
                val newH = 23
                val newM = M + 60 - 45
                println("$newH $newM")
            }

            else -> {
                val newH = H - 1
                val newM = M + 60 - 45
                println("$newH $newM")
            }
        }
    }
}