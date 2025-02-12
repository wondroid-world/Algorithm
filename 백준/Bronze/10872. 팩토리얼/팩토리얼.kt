fun main() {
    val N = readln().toInt()
    var result = 1
    if (N == 0) {
        println(result)
        return
    }
    for (n in 1..N) {
        result *= n
    }
    println(result)
}
