select p.product_id, ifnull(round(sum(units*price)/sum(units) , 2), 0) as average_price
from prices p left join unitsSold s
on p.product_id = s.product_id
and s.purchase_date between p.start_date and p.end_date
group by product_id;