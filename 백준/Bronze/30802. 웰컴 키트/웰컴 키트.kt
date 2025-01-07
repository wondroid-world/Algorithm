fun main() {
    val N = readln().toInt()
    val sizes = readln().split(" ").map { it.toInt() }
    val (T, P) = readln().split(" ").map { it.toInt() }
    var TShirts = 0

    for (size in sizes) {
        val share = size / T
        val rest = size % T
        TShirts += if (rest == 0) share else share + 1
    }

    println(TShirts)
    println("${N / P} ${N % P}")
}