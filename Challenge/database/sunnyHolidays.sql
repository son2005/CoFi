/*
Winter is coming, and it's going to be great! The weather forecasters promise that it's going to be snowy, and there are a bunch of holidays so you'll be able to spend entire days on the slopes. You want to know how many perfect ski days, which are sunny days that fall on holidays, there are going to be this winter.

You downloaded information about the weather forecast and saved it as the table weather, which consists of a single sunny_date column of type DATE. Information about the upcoming holidays is stored in the table holidays, which consists of a holiday_date column of type DATE. It is guaranteed that the elements of each table are unique.

Given the holidays and weather tables, return the dates that are present in both (i.e., their intersection). The resulting table should consist of a single ski_date column, and its elements should be sorted in ascending order.

Example

For the following tables holidays

holiday_date
2016-12-31
2017-01-02
2017-01-03
2017-01-20
and weather

sunny_date
2016-12-31
2016-12-25
2017-02-01
2017-01-02
2016-11-27
2017-01-01
the output should be

ski_date
2016-12-31
2017-01-02
The dates in this example are given in YYYY-MM-DD format.

[execution time limit] 10 seconds (mysql)
*/
-- https://app.codesignal.com/challenge/vSAxE2Ks6mqqJmdQa?solutionId=3p4CmGroMoLcy6Nhw
CREATE PROCEDURE sunnyHolidays()
SELECT holiday_date ski_date
FROM holidays h
JOIN weather w
ON h.holiday_date = w.sunny_date
ORDER BY 1
