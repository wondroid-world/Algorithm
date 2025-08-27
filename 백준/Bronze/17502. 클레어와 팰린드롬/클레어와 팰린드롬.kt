fun main() {
    val N = readln().toInt()
    val word = readln()
    val length = word.length
    var result = MutableList(length) { ' ' }
    for (i in 0..(length / 2)) {
        if (word[i] == '?' && word[length - i - 1] == '?') {
            result[i] = 'a'
            result[length - i - 1] = 'a'
            continue
        } else if (word[i] == '?') {
            result[i] = word[length - i - 1]
            result[length - i - 1] = word[length - i - 1]
            continue
        } else if (word[length - i - 1] == '?') {
            result[i] = word[i]
            result[length - i - 1] = word[i]
            continue
        } else if (word[i] == word[length - i - 1]) {
            result[i] = word[i]
            result[length - i - 1] = word[i]
            continue
        }
    }
    println(result.joinToString(""))
}
