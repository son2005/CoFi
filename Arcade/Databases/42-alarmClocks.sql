/*
You are developing an alarm clock app that works as follows: the user can set a date and a time, and the app will ring every week at the given time, starting at the given date until the end of the current year.

The starting date is the only record in the userInput table, which has the following structure:

input_date: the date and time of the first alarm (of a DATETIME type).
Given the table, your task is to write a select statement which returns a single column alarm_date. This column should contain all dates (including the time) when the alarm clock will ring. The entries should be arranged in ascending chronological order.

Example

For the following table userInput

input_date
2016-10-23 22:00:00
the output should be

alarm_date
2016-10-23 22:00:00
2016-10-30 22:00:00
2016-11-06 22:00:00
2016-11-13 22:00:00
2016-11-20 22:00:00
2016-11-27 22:00:00
2016-12-04 22:00:00
2016-12-11 22:00:00
2016-12-18 22:00:00
2016-12-25 22:00:00

https://codesignal.s3.amazonaws.com/tasks/alarmClocks/img/example.jpg?_tm=1590768032348
*/

-- https://app.codesignal.com/arcade/db/time-river-revisited/G9zoZjTzk6JpJGFbd

CREATE PROCEDURE alarmClocks()
BEGIN
    -- DROP TABLE IF EXISTS t;
    -- CREATE TABLE IF NOT EXISTS t
    -- (
    --     alarm_date DATETIME
    -- );

    -- SET @d := (SELECT input_date FROM userinput);
    -- SET @m := YEAR(@d);

    -- WHILE (YEAR(@d) <= @m) DO
    --     INSERT INTO t(alarm_date) VALUES (@d);
    --     SET @d := ADDDATE(@d, 7);
    -- END WHILE;

    -- SELECT * FROM t;
    SELECT @a alarm_date
    FROM userinput,
    (SELECT 1 UNION SELECT 2 UNION SELECT 3 UNION SELECT 4) a,
    (SELECT 1 UNION SELECT 2 UNION SELECT 3 UNION SELECT 4) b,
    (SELECT 1 UNION SELECT 2 UNION SELECT 3 UNION SELECT 4) c
    WHERE YEAR(IFNULL(@a := ADDDATE(@a, 7), @a := input_date)) = YEAR(input_date);

END
