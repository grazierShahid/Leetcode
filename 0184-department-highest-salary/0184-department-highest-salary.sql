select d.name as Department, e.name as Employee, Salary
from employee e join department d
on e.departmentId = d.id
where salary = (select max(salary) from employee where departmentId = d.id);