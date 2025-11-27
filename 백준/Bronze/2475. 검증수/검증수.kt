fun main() {
    val nums = readln().split(" ").map { it.toInt() * it.toInt() }
    println(nums.sum() % 10)
}