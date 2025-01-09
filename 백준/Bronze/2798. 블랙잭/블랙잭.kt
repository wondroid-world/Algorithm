fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    val numbers = readln().split(" ").map { it.toInt() }
    val sums = mutableSetOf<Int>()

    for (i in 0 until N - 2) {
        for (j in 1 until N - 1) {
            for (k in 2 until N) {
                if (i != j && j != k && k != i) {
                    val sum = numbers[i] + numbers[j] + numbers[k]
                    if (sum <= M) sums.add(sum)
                }
            }
        }
    }
    val newSums = sums.sorted()
    println(newSums.last())
}
