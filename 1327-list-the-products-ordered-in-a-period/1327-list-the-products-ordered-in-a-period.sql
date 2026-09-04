select P.product_name , sum(o.unit) as unit
from Products P
join Orders o
on P.product_id = o.product_id
WHERE o.order_date >= '2020-02-01'
  AND o.order_date < '2020-03-01'
group by P.product_id
having sum(o.unit) >= 100;


