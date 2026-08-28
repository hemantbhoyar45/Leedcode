select 
M.employee_id, 
M.name,
COUNT(E.employee_id) as reports_count, 
ROUND(avg(E.age), 0) as average_age
from Employees M
join Employees E
on M.employee_id = E.reports_to

group by 
M.employee_id,
M.name
ORDER BY M.employee_id;





