// https://app.codesignal.com/challenge/tveq8rCtqiXC7tbe4

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
