/*
The board of the game Katro is a 4 x 4 matrix, divided into 2 regions of 2 x 4, one region per player.

Given the state of the board in board, and the coordinates of a cell row and col, check if the player can capture some of the opponent's pebbles from this cell and return the number of the captured pebbles.

Rules for capturing:

The capturing cell must be of the inner rows of the board, i.e. only the cells of the second and third rows can capture.
The cell in the second row can capture pebbles of the third or forth row.
The cell in the third row can capture pebbles of the second or first row.
For the cell in the second row to capture pebbles of the forth row, the third row must be empty (all values of the third row are 0s).
For the cell in the third row to capture pebbles of the first row, the second row must be empty.
The capturing cell can capture only the pebbles of its column
Look at the examples for more understanding.

Examples
Let's consider the following state of the board:

[[1, 7, 2, 4],
 [0, 0, 0, 0],
 [8, 3, 4, 0],
 [1, 1, 1, 0]]
For row = 1 and col = 2, the answer is 4,
Explanation:
The capturing cell is cell (1, 2) (second row and third column), it can capture since it's in the inner rows, and more precisely it can capture pebbles of the third and forth rows, but since the third row is not empty, it will capture pebbles from there and of the same column, so it captures the pebbles at (2, 2), which is 4 pebbles.
For row = 2 and col = 1, the answer is 7 => this cell can capture pebbles of the second and first rows, but the second row is empty, so it capture the one at the first row at (0, 1) which is 7.
For row = 3 and col = 1, the answer is 0 => this cell is not of the inner rows, so it cannot capture.
[execution time limit] 4 seconds (js)

[input] array.array.integer board

board.length == board[i].length == 4
sum(board[i][j]) == 32
0 <= board[i][j] <= 20

[input] integer row

0 <= row <= 3

[input] integer col

0 <= col <= 3

[output] integer
*/
// https://app.codesignal.com/challenge/PHch4SjbbLrcPGTaD
function checkEmpty(board, r) {
    for(c = 0; c < 4; c++) {
        if(board[r][c]) return false
    }
    return true
}
function katroChallenge1(board, row, col) {
    // check inner rows
    if((row != 1 && row != 2)) return 0

    // Second row can capture pebbles of the third or fourth row (to capture fourth row, all third row must empty)
    if(row == 1) {
        return board[row+1][col] > 0 ? board[row+1][col] : checkEmpty(board, 2) ? board[row+2][col] : 0
    }
    // Third row can capture pebbles of the second or first row (to capture first row, all second row must empty)
    if(row == 2) {
        return board[row-1][col] > 0 ? board[row-1][col] : checkEmpty(board, 1) ? board[row-2][col] : 0
    }
}
