package org.example

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val N = readln().toInt()
    val points = listOf<Point>().toMutableList()
    repeat(N) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        val point = Point(x, y)
        points.add(point)
    }
    points.sortBy { it.y }
    points.sortBy { it.x }

    points.forEach {
        println("${it.x} ${it.y}")
    }
}


data class Point(
    val x: Int,
    val y: Int
)











