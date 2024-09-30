select d.name as Department, e.name as Employee, Salary 
from employee e join department d
on e.departmentID = d.id
where salary = (select max(salary) from employee where departmentID = d.id);
