fun main() {
    val T = readln().toInt()
    var result: String = ""
    for (i in 1..T) {
        val (r, str) = readln().split(" ")
        for (j in str) {
            result += "${j}".repeat(r.toInt())
        }
        result += "\n"
    }
    print(result)
}