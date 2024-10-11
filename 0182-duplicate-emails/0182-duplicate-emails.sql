select p1.email from person p1 join person p2
where p1.email = p2.email and p1.id < p2.id
group by email;