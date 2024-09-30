select c.name as Customers
from customers c left join orders o
on c.id = o.customerID
where o.customerID is null;