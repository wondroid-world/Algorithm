fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }.sorted()
    var i = 2
    var n = N
    var m = M
    var result1 = 1


    while (i <= n && i <= m) {
        while (n % i == 0 && m % i == 0) { 
            result1 *= i
            n /= i
            m /= i
        }
        i++
    }
    val result2 = N  * (M / result1)
    println(result1)
    println(result2)
}