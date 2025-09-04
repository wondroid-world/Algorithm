package org.example

import kotlin.math.max
import kotlin.math.min

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val N = readln().toInt()
    val bigs = mutableListOf<Big>()
    var count = 0

    repeat(N) {
        val (weight, height) = readln().split(" ").map { it.toInt() }
        bigs.add(Big(x = weight, y = height))
    }
    bigs.mapIndexed { firstIndex: Int, firstBig: Big ->
        bigs.mapIndexed { secondIndex: Int, secondBig: Big ->
            if (firstIndex != secondIndex) {
                if (firstBig.x < secondBig.x && firstBig.y < secondBig.y) {
                    count++
                }
            }
        }
        firstBig.level = count + 1
        count = 0
    }
    bigs.map { print("${it.level} ") }
}

data class Big(
    var level: Int = 0,
    val x: Int,
    val y: Int,
)










