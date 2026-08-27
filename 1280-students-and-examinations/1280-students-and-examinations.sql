select S.student_id,S.student_name, sub.subject_name  ,count(E.student_id) as attended_exams
from Students S
cross join Subjects sub
left join Examinations E

on S.student_id = E.student_id
and sub.subject_name = E.subject_name 

group by 
S.student_id,
S.student_name,
sub.subject_name

order by
S.student_id,
sub.subject_name
