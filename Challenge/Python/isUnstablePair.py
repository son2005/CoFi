def isUnstablePair(a, b):
    if b < a:
        a, b = [b, a]
    return b < a.lower() and b > a.upper()
