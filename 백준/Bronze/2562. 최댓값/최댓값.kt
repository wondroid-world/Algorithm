fun main() {
    val numbers = mutableListOf<Int>()
    for (index in 0 until 9) {
        numbers.add(readln().toInt())
    }
    val maxNumber = numbers.max()
    val maxIndex = numbers.indexOf(maxNumber) + 1
    println("$maxNumber\n$maxIndex")
}