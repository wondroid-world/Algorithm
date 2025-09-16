fun main() {


    val N = readln().toInt()
    val nNumbers = LongArray(N)
    readln().split(" ").forEachIndexed { index, char ->
        nNumbers[index] = char.toLong()
    }

    val M = readln().toInt()
    val mNumbers = LongArray(M)
    readln().split(" ").mapIndexed { index, char ->
        mNumbers[index] = char.toLong()
    }

    nNumbers.sort()

    for (i in mNumbers) {
        val result = nNumbers.bSearch(i)
        println(result)
    }
}

fun LongArray.bSearch(value: Long): Int {
    var low = 0
    var high = this.lastIndex
    var mid = 0

    while (low <= high) {
        mid = (low + high) / 2

        when {
            this[mid] < value -> low = mid + 1
            this[mid] > value -> high = mid - 1
            this[mid] == value -> return 1
        }
    }
    return 0
}