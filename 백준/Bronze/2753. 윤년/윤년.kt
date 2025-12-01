fun main() {
    val year = readln().toInt()
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        println(1)
        return
    }
    println(0)
}