// https://app.codesignal.com/challenge/oqn9ei4YsBSsxeDXS

countBlackCells = (n, m) => {
    a = n + m - 2
    while(m)
        [n, m] = [m, n % m]
    return a + n
}
