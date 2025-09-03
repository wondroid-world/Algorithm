fun main() {
    val N = readln().toInt()
    val movieName = "666"
    var count = 0
    var movieNameCount = 0
    while (true) {
        count++
        if (count.toString().contains(movieName)) {
            movieNameCount++
            if (movieNameCount == N) {
                println(count)
                break
            }
        }
    }
}