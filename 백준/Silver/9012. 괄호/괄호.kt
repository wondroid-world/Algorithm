fun main() {
    val N = readln().toInt()
    val results = mutableListOf<String>()
    repeat(N) {
        val parenthesisString = readln().split("")
        val checkList = mutableListOf<String>()
        for (s in parenthesisString) {
            if (s == ")" && checkList.last() == "(") checkList.removeLast() else checkList.add(s)
        }
        if (checkList.size == 2) results.add("YES") else results.add("NO")
    }
    println(results.joinToString("\n"))
}
