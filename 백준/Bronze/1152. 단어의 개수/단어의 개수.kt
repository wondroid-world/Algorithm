fun main() {
    val words = readln().split(" ").filter { it.isNotEmpty() }
    println(words.size)
}