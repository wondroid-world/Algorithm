fun main() {
    val N = readln().toInt()
    var i = 1
    var nums = mutableListOf(i)

    repeat(N - 1) {
        i++
        nums.add(i)
    }
    var j = 0
    while (nums[j] != nums.last()) {
        nums.add(nums[++j])
        j++
    }
    println(nums.last())
}