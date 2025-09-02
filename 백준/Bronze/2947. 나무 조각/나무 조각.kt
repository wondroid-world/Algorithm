package org.example

import kotlin.math.max
import kotlin.math.min

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val numbers =  readln().split(" ").map { it.toInt() }.toMutableList()
    val result = listOf(1, 2, 3, 4, 5)
    while (numbers != result) {
        for (j in 0 until  4) {
            if (numbers[j] > numbers[j + 1]) {
                val i = numbers[j]
                numbers[j] = numbers[j + 1]
                numbers[j + 1] = i
                println(numbers.joinToString(" "))
            }
        }
    }
}









