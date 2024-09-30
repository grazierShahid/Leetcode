select d.name as Department, e.name as Employee, e.Salary
from employee e join department d
on e.departmentID = d.id
where (select count(distinct (e2.salary))
    from employee e2
    where e2.salary > e.salary
    and e.departmentID = e2.departmentID
    ) < 3;

