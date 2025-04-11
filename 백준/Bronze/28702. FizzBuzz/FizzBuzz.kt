import kotlin.math.round
import kotlin.math.roundToInt

fun main() {
    // 3의 배수 && 5의 배수 -> "FizzBuzz"
    // 3의 배수 && 5의 배수 아님 -> "Fizz"
    // 3의 배수 아님 && 5의 배수 -> "Buzz"
    // 3, 5의 배수 아님 -> i
    val T = 3
    val stringNumbers = mutableListOf<String>()
    var count = 3
    val numbers = Array(3){ 0 }

    for (t in 1..T) {
        val number = readln()
        stringNumbers.add(number)
    }

    for (number in stringNumbers) {
        if (number.toIntOrNull() != null) {
            val result = number.toInt() + count
            when {
                result % 5 == 0 && result % 3 == 0 -> println("FizzBuzz")
                result % 3 == 0 -> println("Fizz")
                result % 5 == 0 -> println("Buzz")
                else -> println(result)
            }
            return
        }
        count--
    }
    println(1)
}
