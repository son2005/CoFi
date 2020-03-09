// https://app.codesignal.com/challenge/wq96QyEqEBvjM7k5C
v = 'aeiou'
countVowelConsonant = s => s ? (l = s.match(/[aeiou]/g), 2 * s.length - (l ? l.length : 0))
                             : 0
