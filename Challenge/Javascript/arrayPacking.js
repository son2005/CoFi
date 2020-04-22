// https://app.codesignal.com/challenge/7YX8Fcyhxo62wBXoM

r = 0
arrayPacking = a => a.map( (e, i) => r |= e << i * 8) | r
