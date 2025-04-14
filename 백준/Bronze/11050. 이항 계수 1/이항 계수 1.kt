import kotlin.math.round
import kotlin.math.roundToInt

fun main() {
    val (N, K) = readln().split(" ").map { it.toInt() }

    var nResult = 1
    var kResult = 1
    var minsResult = 1

    for (n in 1..N) {
        nResult *= n
    }

    for (k in 1..K) {
        kResult *= k
    }

    for (mins in 1..(N-K)) {
        minsResult *= mins
    }

    val result = nResult / (kResult * minsResult)
    println(result)
}
