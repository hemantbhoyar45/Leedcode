-- SELECT
--     CASE
--         WHEN id % 2 = 1 AND id < (SELECT MAX(id) FROM Seat)
--             THEN id + 1
--         WHEN id % 2 = 0
--             THEN id - 1
--         ELSE id
--     END AS id,
--     student
-- FROM Seat
-- ORDER BY id;

select 
case 
  when id % 2 = 1 and  id < (select max(id) from Seat)
  then id + 1
  when id % 2 = 0
  then id - 1
  else id
  end as id,
  student 
  from seat 
  order by id;