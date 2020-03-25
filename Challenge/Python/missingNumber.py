def missingNumber(a):
    i = 0
    for e in sorted(a):
        if e != i:
            break
        i += 1
    return i
