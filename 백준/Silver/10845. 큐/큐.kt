fun main() {
    val N = readln().toInt()
    val Queue = mutableListOf<Int>()
    val results = mutableListOf<Int>()
    repeat(N) {
        val word = readln().split(" ")
        when(word[0]) {
            "push" -> Queue.add(word[1].toInt())
            "pop" -> if (Queue.size == 0) results.add(-1) else results.add(Queue.removeFirst())
            "size" -> results.add(Queue.size)
            "empty" -> if (Queue.isEmpty()) results.add(1) else results.add(0)
            "front" -> if (Queue.isEmpty()) results.add(-1) else results.add(Queue.first())
            "back" -> if (Queue.isEmpty()) results.add(-1) else results.add(Queue.last())
        }
    }
    println(results.joinToString("\n"))
}