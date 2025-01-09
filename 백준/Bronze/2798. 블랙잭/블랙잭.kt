fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    val numbers = readln().split(" ").map { it.toInt() }.sorted()

    var answer = 0
    for (i in 0..N - 3) {
        var left = i + 1
        var right = N - 1
        while (left < right) {
            val sum = numbers[i] + numbers[left] + numbers[right]
            if (sum == M) {
                println(sum)
                return
            }
            if (sum < M) {
                answer = maxOf(answer, sum)
                left++
            } else {
                right--
            }
        }
    }
    println(answer)
}
