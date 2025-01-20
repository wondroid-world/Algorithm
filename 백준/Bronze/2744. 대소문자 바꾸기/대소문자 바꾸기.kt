fun main(args: Array<String>) = with(System.`in`.bufferedReader()) {
    val bw = System.out.bufferedWriter()
    val str = readLine()

    str.forEach {
        bw.append(
            when (it) {
                in 'A'..'Z' -> it + 32
                else -> it - 32
            }
        )
    }

    bw.flush()
    bw.close()
}