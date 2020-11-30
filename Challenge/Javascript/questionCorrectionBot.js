/*
When a user asks a question on Quora, the system automatically tries to improve the question's formatting before showing it to more users. Given a question as an input string, perform formatting corrections according to the following rules:

Strip excessive whitespaces:
Remove whitespaces at the start and end, as well as multiple spaces in a row
Fix spacing around punctuation:
Each comma should have a trailing space, but no space preceding it
Questions should start with a capital letter
Questions should end with a single question mark (not 0 or more than one).
Example

For question = " this isn't a relevant question , is it??? ", the output should be
questionCorrectionBot(question) = "This isn't a relevant question, is it?";
For question = "Is this answer correct?", the output should be
questionCorrectionBot(question) = "Is this answer correct?".
Input/Output

[execution time limit] 4 seconds (js)

[input] string question

It is guaranteed that the input string contains at least one non-whitespace character, and the first of these characters is a letter (possibly lowercase).

Guaranteed constraints:
question.length ≤ 100.

[output] string

Corrected version of the question.
*/
// https://app.codesignal.com/challenge/koaDw9hh2XjBapkGb
function questionCorrectionBot(question) {
    arrWords = question.split` `.filter(v => v != '').map(v => v.replace(/,/g, ' , '))
                        .join` `.split` `.filter(v => v != '')
    arrWords.push(...[arrWords.pop().split`?`[0]])
    arrWords = arrWords.join` `.replace(/ ,/g, ',')
    s = arrWords.substr(1).slice(-1)[0] == ',' ? ' ?' : '?'
    return arrWords.charAt(0).toUpperCase() + arrWords.substr(1) + s
}
