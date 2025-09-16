fun main() {
    val N = readln().toInt()
    val points = mutableListOf<Point>()
    repeat(N) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        points.add(Point(x, y))
    }
    points.sortWith(
        comparator = compareBy<Point> {it.y}.thenBy { it.x }
    )

    for (point in points) {
        println("${point.x} ${point.y}")
    }
}


data class Point(
    val x: Int,
    val y: Int
)