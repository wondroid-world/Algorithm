fun main() {
    val N = readln().toInt()
    println("*".repeat(N) + " ".repeat(2 * N - 3) + "*".repeat(N))
    var count = 1
    for (i in (N - 2) downTo 1) {
        println(
            " ".repeat(count) + "*" + " ".repeat(N - 2) + "*" + " ".repeat(2 * i - 1) + "*" + " ".repeat(
                N - 2
            ) + "*"
        )
        ++count
    }
    count--
    println(" ".repeat(N - 1) + "*" + " ".repeat(N - 2) + "*" + " ".repeat(N - 2) + "*")
    for (i in 1..(N - 2)) {
        println(
            " ".repeat(count) + "*" + " ".repeat(N - 2) + "*" + " ".repeat(2 * i - 1) + "*" + " ".repeat(
                N - 2
            ) + "*"
        )
        --count
    }
    println("*".repeat(N) + " ".repeat(2 * N - 3) + "*".repeat(N))
}