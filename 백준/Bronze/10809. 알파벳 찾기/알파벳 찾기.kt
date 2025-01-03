fun main() {
    val S = readln()
    val alphabet = mutableListOf<Char>()
    for (asciiCode in 97..122) {
        alphabet.add(asciiCode.toChar())
    }
    val updateAlphabet = alphabet.map { if (it in S) S.indexOf(it) else -1 }
    println(updateAlphabet.joinToString(" "))
}