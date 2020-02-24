// https://app.codesignal.com/challenge/22wRrHuqwRrTbKQWc

boxesPacking=(l, w, h)=>{
    a=[]
    for(i in l) a[i] = [l[i],w[i],h[i]].sort((a,b)=>{return a-b})

    a.sort((a,b)=>{
        return a[0]+a[1]+a[2]-(b[0]+b[1]+b[2])
    })

    for(i=0; i<a.length-1; i++) {
        c=2
        while(c>=0) if (a[i][c] >= a[i+1][c--]) return !1
    }
    return !0
}
