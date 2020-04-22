// https://app.codesignal.com/challenge/C5sL6RNZgqBM84H6j

holiday = (x, weekDay, month, yearNumber) => {
    h = {}
    c = 0
    for(e of ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']) h[e] = c++
    f = n => new Date(`${n} ${month} ${yearNumber}`).toDateString().split` `
    g = s => s.slice(0, 3)
    r = h[k = g(weekDay)] - h[f('1')[0]]
    d = 7 * x - 6 + (r < 0 ? 7 - -r : r) % 6

    return (f(d)[0] != k || f(d)[1] != g(month)) ? -1 : d
}
