/*
You have a table scores that contains information about a series of soccer games. Your goal is to determine the winner of the series. A team is declared the winner if it won more games than the other team. If both teams had the same number of wins, then the winner is determined by the better goal difference (the difference between the goals that a team scores and the goals that the opposing team scores on them over all the games). If the goal differences are equal, the winner is the team that scored more goals during away games (i.e. games when it was not the host team). The result is the index of the winning team. If the above criteria are not sufficient for determining the winner, return 0.

The scores table contains the following columns:

match_id - the unique ID of the match;
first_team_score - the score of the 1st team in the current match;
second_team_score - the score of the 2nd team in the current match;
match_host - the team that is the host of the match (can be 1 or 2).
Your task is to write a select statement which returns a single column winner, which can contain 1, 2, or 0.

Example

For given table scores

match_id	first_team_score	second_team_score	match_host
1	3	2	1
2	2	1	2
3	1	2	1
4	2	1	2
the output should be

winner
1
The first team won 3 games out of 4, so it's the winner of the series.

[execution time limit] 10 seconds (mysql)
*/
-- https://app.codesignal.com/challenge/F5KcDwew6hYQuW9K9
/*Please add ; after each select statement*/
CREATE PROCEDURE soccerGameSeries()

SELECT
    IF(k = p, 0, IF(k > p, 2, 1)) winner
    /*
    IF(i = j,
       IF(k = p, 0, IF(k > p, 2, 1)),
       IF(i > j, 1, 2)
      )
     winner
    */
FROM(
    SELECT
            /*
            SUM(IF(f > s, 1, 0)) i,
            SUM(IF(f < s, 1, 0)) j,
            SUM(IF(m = 1, s * 2, s)) k,
            SUM(IF(m = 2, f * 2, f)) p
            */
            SUM(IF(m = 1, s * 2, s)) k,
            SUM(IF(m = 2, f * 2, f)) p
    FROM(
        SELECT first_team_score f,
                second_team_score s,
                match_host m
        FROM scores
    ) h
) t;
