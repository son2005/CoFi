/*
GoDaddy makes a lot of different top-level domains available to its customers. A top-level domain is one that goes directly after the last dot ('.') in the domain name, for example .com in example.com. To help the users choose from available domains, GoDaddy is introducing a new feature that shows the type of the chosen top-level domain. You have to implement this feature.
To begin with, you want to write a function that labels the domains as "commercial", "organization", "network" or "information" for .com, .org, .net or .info respectively.
For the given list of domains return the list of their labels.

Example

For domains = ["en.wiki.org", "codesignal.com", "happy.net", "code.info"], the output should be
domainType(domains) = ["organization", "commercial", "network", "information"].

Input/Output

[execution time limit] 4 seconds (js)

[input] array.string domains

A list of domains, where each domain contains at least one dot. It is guaranteed that each top-level domain of these domains belongs to one of the types described above.

Guaranteed constraints:
4 ≤ domains.length ≤ 25,
5 ≤ domains[i].length ≤ 20.

[output] array.string

The list of labels for the given domains.
*/

// https://app.codesignal.com/challenge/ENTkv7rJ3TxdNPoeo

// function domainType(domains) {
//     var dict = {'org': 'organization', 'com': 'commercial', 'net': 'network', 'info': 'information'}
//     var arr = []
//     for(domain of domains) {
//         var topLevelDNS = domain.split`.`.pop()
//         arr.push(dict[topLevelDNS])
//     }
//     return arr
// }

// 132
// h = {'o': 'organization', 'c': 'commercial', 'n': 'network', 'i': 'information'}
// a = []
// domainType = d => d.map(v => a.push(h[v.split`.`.pop()[0]])) && a

// 124
h = {'g': 'organization', 'm': 'commercial', 't': 'network', 'o': 'information'}
a = []
domainType = d => d.map(v => a.push(h[v.slice(-1)])) && a
