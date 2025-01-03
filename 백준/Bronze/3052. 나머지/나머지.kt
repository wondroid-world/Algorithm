fun main() {
    val rests = mutableSetOf<Int>()
    repeat(10) {
        rests.add(readln().toInt() % 42)
    }
    println(rests.size)
}
