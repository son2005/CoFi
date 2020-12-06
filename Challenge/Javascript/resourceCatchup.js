/*
As part of a successful war campaign you just took control of a major city. This is where you will make your new Forward Operating Base, and where your troops will house their new barracks. However, when your troops are in the city they consume k units of food (for some integer k) as upkeep at the beginning of every hour (i.e. at HH:00:00 where HH stands for an hour). This upkeep happens even when you're offline and not actively playing.

Given the timestamps of logout and login performed consecutively and the amount of food you had at those moments, find how much food your troops consume each hour.

For simplicity's sake, assume that you are neither logged in nor logged out at the beginning of each hour.

Example

For logOut = [1451604600, 100] and logIn = [1451660401, 36], the output should be
resourceCatchUp(logOut, logIn) = 4.

1451604600 corresponds to 31 December, 2015, 23:30:00;
1451660401 corresponds to 1 January, 2016, 15:00:01;
thus, food consumption took place exactly 16 times while you were logged out;
your amount of food was reduced by 64 units. This means that each hour your troops consumed 4 units of food.
Check out the image below for better understanding:



Input/Output

[execution time limit] 4 seconds (js)

[input] array.integer logOut

Array of two positive integers with your logout statistics: the first element corresponds to the Unix time when you logged out, the second element stands for how many units of food you had at that moment.

Guaranteed constraints:
5 · 107 ≤ logOut[0] ≤ 2 · 109,
5 ≤ logOut[1] ≤ 5 · 104.

[input] array.integer logIn

Login statistics, given in the same format as logOut.

It is guaranteed that:

logIn[0] > logOut[0], i.e. logging in happened after logging out;
logIn[1] < logOut[1], i.e. your troops consumed a positive number of units of food;
there exists some integer k satisfying the description for logOut and logIn.
Guaranteed constraints:
1 ≤ logOut[0] < logIn[0],
logIn[1] < logOut[1] ≤ 2 · 109.

[output] integer

The amount of food your troops consume each hour.
*/

// https://app.codesignal.com/challenge/QvFxJqA8zDNX4265F

// function resourceCatchUp(logOut, logIn) {
//     var foodConsumed = logOut[1] - logIn[1]
//     var totalHour = Math.ceil((logIn[0] - logOut[0]) / 60 / 60)
//     return foodConsumed / totalHour
// }

resourceCatchUp = (o, i) => (o[1] - i[1]) / Math.ceil((i[0] - o[0]) / 36e2)
