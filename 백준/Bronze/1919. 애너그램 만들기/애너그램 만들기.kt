package org.example

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val word1 = readln()
    val word2 = readln()
    var sameWord = ""
    val indexs = mutableListOf<Int>()

    for (i in word1) {
        for (j in 0..word2.length - 1) {
            if (i == word2[j] && j !in indexs) {
                sameWord += word2[j]
                indexs.add(j)
                break
            }
        }
    }
    println((word1.length - sameWord.length) + (word2.length - sameWord.length))
}









