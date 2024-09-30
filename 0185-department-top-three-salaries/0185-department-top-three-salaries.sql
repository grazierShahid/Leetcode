select d.name as Department, e.name as Employee, Salary
from employee e join department d
on e.departmentID = d.id
where e.salary in (
    select distinct top 3 salary
    from employee e2
    where e2.departmentID = d.id
    order by salary desc
)
order by department, salary desc;