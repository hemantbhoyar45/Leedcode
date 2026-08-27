select V.customer_id, COUNT(*) as count_no_trans
from Visits V
left join Transactions T
on V.visit_id = T.visit_id
where T.visit_id is NULL
GROUP BY customer_id;
