fun main() {
    val (N, M) = readln().split(" ").map { it.toLong() }
    if (N >= M) {
        println(N - M)
    } else {
        println(M - N)
    }
}
