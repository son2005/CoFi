# https://app.codesignal.com/challenge/9TMYWHjjAr5GAjAxy

def streamValidation(s):
    c = 128

    def f(s):
        def m(a):
            return len(bin(a)[2:].replace('0', ''))
        b = s.pop(0)
        if b < 127:
            return True if len(s) == 0 else f(s)

        n = m(b & 240) - 1
        if len(s):
            while n > 0:
                n -= 1
                if (s.pop(0) & c) != c:
                    return False

        return f(s) if len(s) else False if n else True

    return f(s)
