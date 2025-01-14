fun main() {
    val N = readln().toInt()
    val people = mutableMapOf<Int, MutableList<String>>()
    repeat(N) {
        val (age, name) = readln().split(" ")
        if (people.containsKey(age.toInt())) people[age.toInt()]?.add(name) else people.getOrPut(age.toInt()) { mutableListOf() }
            .add(name)
    }

    for (key in people.keys.sorted()) {
        for (name in people[key]!!) {
            println("$key $name")
        }
    }
}