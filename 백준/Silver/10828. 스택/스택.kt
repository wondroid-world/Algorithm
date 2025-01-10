fun main() {
    val n = readln().toInt()
    val stack = mutableListOf<Int>()
    val sb = StringBuilder()

    repeat(n) {
        val input = readln().split(" ")
        when (input[0]) {
            "push" -> {
                // push X
                stack.add(input[1].toInt())
            }
            "pop" -> {
                // pop
                if (stack.isEmpty()) sb.appendLine(-1)
                else sb.appendLine(stack.removeLast())
            }
            "size" -> {
                // size
                sb.appendLine(stack.size)
            }
            "empty" -> {
                // empty
                sb.appendLine(if (stack.isEmpty()) 1 else 0)
            }
            "top" -> {
                // top
                sb.appendLine(if (stack.isEmpty()) -1 else stack.last())
            }
        }
    }
    print(sb)
}