// https://app.codesignal.com/challenge/WRCaiCMpctcAq57aH

/*
    0 + 0 + 1 = 1
    1 + 2 + 1 = 4
    4 + 4 + 1 = 9
    9 + 6 + 1 = 16
    16 + 8 + 1 = 25
*/
acc = 0
num = 0
result = 0
p = (acc, num, result, cells) =>
  (acc += num + (!num?0:1)) < cells ? p(acc, num + 2, ++result, cells) : result
