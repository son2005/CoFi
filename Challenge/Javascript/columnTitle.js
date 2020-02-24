// https://app.codesignal.com/challenge/iwQwAS9Zn5v7SNj9D
columnTitle = f = n => n-- ? f(n/26|0) + Buffer([65+n%26]) : ''
