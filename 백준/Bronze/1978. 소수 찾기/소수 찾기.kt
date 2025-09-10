fun main() {
    val N = readln().toInt()
    var result = 0
    val nums = readln().split(" ").map { it.toInt() }
    nums.map { num: Int ->
        var count = 0
        if (num == 1) {
        } else {
            for (i in 2 until num) {
                if (num % i != 0) {
                    count++
                }
            }
        }
        if (count == num - 2) result++
    }
    println(result)
}