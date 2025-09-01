package org.example

import kotlin.math.max
import kotlin.math.min

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val N = readln().toInt() // 사람 수
    val seats = readln()
    val cupholders = mutableListOf<Char>()
    for (index in 0 until seats.length) {
        if (index == 0 && seats[index] == 'S') {
            cupholders.add('*')
            cupholders.add('S')
            cupholders.add('*')
        } else if (index == 0 && seats[index] == 'L') {
            cupholders.add('*')
            cupholders.add('L')
            cupholders.add('L')
            cupholders.add('*')
        } else if (seats[index] == 'S') {
            cupholders.add('S')
            cupholders.add('*')
        } else if (seats[index] == 'L' && cupholders[cupholders.size -1] == '*') {
            cupholders.add('L')

        } else if ((seats[index] == 'L') && cupholders[cupholders.size -1] == 'L') {
            cupholders.add('L')
            cupholders.add('*')
        }
    }
    println(min(N, cupholders.count { it == '*' }))
}









