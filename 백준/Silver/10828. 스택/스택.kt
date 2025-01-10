fun main() {
    val N = readln().toInt()
    val numbers = mutableListOf<Int>()
    val results = mutableListOf<Int>()
    repeat(N) {
        val word = readln()
        when (word) {
            "pop" -> if (numbers.size == 0) results.add(-1) else results.add(numbers.removeLast())
            "size" -> results.add(numbers.size)
            "empty" -> if (numbers.isEmpty()) results.add(1) else results.add(0)
            "top" -> if (numbers.isEmpty()) results.add(-1) else results.add(numbers.last())
            else -> {
                val (push, number) = word.split(" ")
                if (push == "push") numbers.add(number.toInt())
            }
        }
    }
    println(results.joinToString("\n"))
}