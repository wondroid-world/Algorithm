package org.example

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val (A, B, C) = readln().split(" ").map { it.toInt() }
    val parkingTimes = MutableList(101) { 0 }
    var cost = 0
    repeat(3) {
        val (arriveTime, leftTime) = readln().split(" ").map { it.toInt() }
        for (i in (arriveTime + 1)..leftTime) {
            parkingTimes[i] += 1
        }
    }
    parkingTimes.map {
        if (it == 1) {
            cost += A
        } else if (it == 2) {
            cost += 2 * B
        } else if (it == 3) {
            cost += 3 * C
        }
    }
    println(cost)
}









