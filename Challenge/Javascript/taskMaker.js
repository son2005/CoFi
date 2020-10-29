// https://app.codesignal.com/challenge/fnh4t3YHt8chWLRzo
function taskMaker(source, challengeId) {
    a = []
    for(i = 0; i < source.length; i++) {
        if(~source[i].indexOf('/')) {
            let r = new RegExp('//DB '+ challengeId +'//', 'i')
            if(r.exec(source[i])) {
                a.pop() // remove last
                a.push(source[i].replace(r, ""))
            }
        }
        else a.push(source[i])
    }
    return a
}
