/*
Little Ratiorg was tired of being bullied by other bots and mighty CodeFighters, so he joined the Ninja Bots Training camp. Any bot that manages to solve all the challenges becomes an ultimate master of algorithms, and that is exactly what Ratiorg wants.

It's been several weeks, and Ratiorg is getting strong enough that he's making some enemies. They're starting to feel threatened, which is why they sabotaged his next challenge. Here's how they did it:

Ratiorg is about to be locked up in one of multiple rooms in a rectangular hangar. The rooms are securely locked: it is possible to leave a room only in one direction specific to this room. The problem is, the villains have messed the system up, so now there is no way to finish the challenge from certain rooms. The challenge will be over if Ratiorg successfully leaves the hangar (i.e. leaves the rectangle that represents it).

To figure out the odds of Ratiorg's success, you'd like to calculate the number of rooms, starting from which Ratiorg won't be able to finish the challenge. Implement a function that will return this number.

Example

For

hangar = [['U', 'L'],
          ['R', 'L']]
the output should be
sabotage(hangar) = 2.

Ratiorg won't be able to get out of the hangar if he starts from either of the bottom rooms.

Check out the image below for more context:
https://codesignal.s3.amazonaws.com/tasks/sabotage/img/example.png?_tm=1582087499951
*/

// https://app.codesignal.com/challenge/rWRckbbvwAnNqTnhC
function validPos(i, j, n, m, h, c) {
    // console.log(">>>>>", i, j, n, m)
    return (i >= 0 && i <= n - 1 && j >= 0 && j <= m - 1) && h[i][j] == c
}
function sabotage(hangar) {
    var start = hangar[0][0]
    // Find the room available to exit this maze
    var arrRoom = []
    var n = hangar.length
    var m = hangar[0].length
    for(var i in hangar) {
        for(var j in hangar[i]) {
            var c = hangar[i][j]
            // Top
            if(i == 0) {
                if(j == 0 && c == "L" ||
                j == m - 1 && c == "R" ||
                c == "U" ||
                i == n - 1 && c == "D") // for n = 1
                    arrRoom.push([i, j])
            }
            // Bottom
            else if(i == n - 1) {
                if(j == 0 && c == "L" ||
                j == m - 1 && c == "R" ||
                c == "D")
                    arrRoom.push([i, j])
            }
            else {
                if(j == 0 && c == 'L' || j == m - 1 && c == 'R')
                    arrRoom.push([i, j])
            }
        }
    }
    // console.log(arrRoom)

    arrI = [...hangar]
    var count = 0
    for(var i in arrRoom) {
        var process = []
        process.push(arrRoom[i])
        while(process.length) {
            var arr = process.shift()
            // Mark the room
            arrI[arr[0]][arr[1]] = '0'
            count++

            // Check left
            var pos = +arr[1] - 1
            if(validPos(arr[0], pos, n, m, hangar, 'R')) {
                process.push([arr[0], pos])
            }
            // right
            pos = +arr[1] + 1

            if(validPos(arr[0], pos, n, m, hangar, 'L')) {
                process.push([arr[0], pos])
            }
            // bottom
            pos = +arr[0] + 1
            if(validPos(pos, arr[1], n, m, hangar, 'U')) {
                process.push([pos, arr[1]])
            }
            // top
            pos = +arr[0] - 1
            if(validPos(pos, arr[1], n, m, hangar, 'D')) {
                process.push([pos, arr[1]])
            }
        }
    }
    // console.log(arrI, count, m, n)

    return m*n - count
}
