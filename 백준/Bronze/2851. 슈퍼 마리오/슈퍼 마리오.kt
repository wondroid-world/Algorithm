fun main() {
    val T = 10
    var result: Int = 0
    for (i in 1..T) {
        val num = readln().toInt()
        val preResult = result
        result += num
        if (result >= 100) {
            if (100 - preResult < result - 100) result = preResult
            break
        }
    }
    println(result)
}