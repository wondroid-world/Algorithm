fun main() {
    val result = mutableListOf<Int>()
    val N = readln().toInt()
    val nMap: MutableMap<Int, Int> = mutableMapOf()
    val nList = readln().split(" ").map { it.toInt() }.sorted()
    nList.forEach {
        if (nMap.isEmpty() || !nMap.containsKey(it)) {
            nMap.put(it, 1)
        } else {
            val value = nMap.get(it) ?: 0
            nMap[it] = value + 1
        }

    }

    val M = readln().toInt()
    val mNums: List<Int> = readln().split(" ").map { it.toInt() }

    for (num in mNums) {
        result.add(nMap.by(num))
    }

    println(result.joinToString(" "))
}

fun Map<Int, Int>.by(num: Int): Int = this[num] ?: 0

