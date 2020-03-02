https://app.codesignal.com/challenge/qAYye4nduWhC6dDhR
function missedClasses(y, w, h) {
    a = []
    for(e of h) {
        m = e.split("-")[0]
        d = new Date(((m < 9) ? y + 1 : y)+"-"+e).getDay()
        a.push(!d ? 7 : d)
    }
    return a.filter(x => w.includes(x)).length
}

// shorthand
missedClasses = (y, w, h) => h.map(x => (t = new Date(((x.substr(0,2) < 9) ? y + 1 : y)+"-"+x).getDay(), !t ? 7 : t)).filter(x => w.includes(x)).length
