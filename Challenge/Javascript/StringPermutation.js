// https://app.codesignal.com/challenge/tveq8rCtqiXC7tbe4
/*
Avoid using C++'s std::next_permutation or similar features in other languages to solve this challenge. Implement the algorithm yourself, since this is what you would be asked to do during a real interview.

Given a string s, find all its potential permutations. The output should be sorted in lexicographical order.

Example

For s = "CBA", the output should be
stringPermutations(s) = ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"];
For s = "ABA", the output should be
stringPermutations(s) = ["AAB", "ABA", "BAA"].
Input/Output

[execution time limit] 4 seconds (js)

[input] string s

A string containing only capital letters.

Guaranteed constraints:
1 ≤ s.length ≤ 5.

[output] array.string

All permutations of s, sorted in lexicographical order.
*/

function stringPermutations(s) {
    if(s && !s[1]) return [s]

    let arrInput = [];
    let arrRes = [];
    let arrDup = [];

    for(let i of s) {
        arrInput.push(i);
    }
    arrInput.sort();

    //first try
    for(let i in arrInput) {
        var arrTemp = [...arrInput]
        var c = arrTemp.splice(i, 1);


        // console.log("ARR ORG: " + arrInput);
        // console.log("ARR START: " + arrTemp);

        process(c, arrTemp, arrRes, arrDup);
    }

    // console.log(arrRes);
    return arrRes;
}

function process(text, arrInput, arrRes, arrDup) {
    // console.log(" >>>>>>>>> ")
    // console.log("TEXT: " + text);
    // console.log("ARR INPUT: " + arrInput);
    // console.log("ARR RES: " + arrRes);

    for(let i in arrInput) {
        let arrTemp = [...arrInput]
        let c = arrTemp.splice(i, 1);
        let t = text + c;
        if (!arrTemp[0]) {
            arrRes.push(t);
            return;
        }

        // Check dup
        let dup = t + "," + arrTemp.join("");
        // console.log("DUP: " + dup)
        if(arrDup[dup]) {
            // console.log("Exists! Skip!");
            continue;
        }
        arrDup[dup] = 1;
        process(t, arrTemp, arrRes, arrDup);
    }
}
