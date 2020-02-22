// https://app.codesignal.com/challenge/vXx8BRKTZMWBSsYw6
multiplyTwoStrings = ((r, a) => {
  for (z = [], x = -1, c = 0, i = r.length - 1; i >= 0; i--) {
    for (z[++x] = "", j = a.length - 1; j >= 0; j--) m = r[i] * a[j] + c, c = ~~(m / 10), z[x] += m % 10;
    for (c && (z[x] += c), e = 0; e < x; e++) z[x] = "0" + z[x];
    c = 0
  }
  for (i in s = "", c = 0, z[x]) {
    for (e of (n = 0, z)) e[i] && (n += +e[i]);
    n += c, c = ~~(n / 10), s = n % 10 + s
  }
  return c && (s = c + s), s
});
