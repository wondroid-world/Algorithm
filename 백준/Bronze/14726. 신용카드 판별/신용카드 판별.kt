package org.example

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val T = readln().toInt()
    repeat(T) {
        val newNumbers = mutableListOf<Int>()
        readln().split("").mapIndexed { index, s ->
            if (index != 0 && index != 17) {
                if (index % 2 != 0) {
                    val S = s.toInt() * 2
                    if (S >= 10) {
                        val newS = S.toString().split("").filter { it.isNotEmpty() }.map { it.toInt() }.sum()
                        newNumbers.add(newS)
                    } else {
                        newNumbers.add(S)
                    }
                } else {
                    newNumbers.add(s.toInt())
                }
            }
        }
        if (newNumbers.sum() % 10 == 0) {
            println("T")
        } else {
            println("F")
        }
    }
}






