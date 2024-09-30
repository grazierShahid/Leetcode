select c.name as Customers
from customers c left join orders o
on c.id = o.customerID
where (select count(customerID) from orders where c.id = customerID) = 0;