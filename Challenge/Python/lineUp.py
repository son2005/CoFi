def lineUp(s):
    if not s:
        return 0

    f = 1
    s = [*s]
    n = 0
    while len(s):
        f ^= s.pop(0) != 'A'
        n += f
    return n
