fun main() {
    val N = readln().toInt()
    var count5 = 0
    var count3 = 0
    val results = emptyList<Pair<Int, Int>>().toMutableList()
    if (N % 3 == 0) {
        count3 = N / 3
        results.add(count5 to count3)
    }
    while (N / 5 >= count5) {
        count5++
        if ((N - count5 * 5) % 3 == 0 && (N - count5 * 5) / 3 >= 0) {
            count3 = (N - count5 * 5) / 3
            results.add(count5 to count3)
        }
    }

    count5 = 0
    count3 = 0
    if (N % 5 == 0) {
        count5 = N / 5
        results.add(count5 to count3)
    }
    while (N / 3 >= count3) {
        count3++
        if ((N - count3 * 3) % 5 == 0 && (N - count3 * 3) / 5 >= 0) {
            count5 = (N - count3 * 3) / 5
            results.add(count5 to count3)
        }
    }

    if (results.isEmpty()) {
        println(-1)
    } else {
        val anw = results.map { it.first + it.second }.min()
        println(anw)
    }
}
