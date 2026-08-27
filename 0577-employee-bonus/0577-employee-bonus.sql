select E.name, B.bonus
from Employee E
left join bonus B
on E.empId = B.empId
where B.bonus is NULL || B.bonus < 1000;
