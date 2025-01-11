fun main() {
    val K = readln().toInt()
    val moneys = mutableListOf<Int>()
    repeat(K) {
        val money = readln().toInt()
        if (money == 0 && moneys.isNotEmpty()) moneys.removeLast() else moneys.add(money)
    }
    println(moneys.sum())
}