select contest_id, round(count(distinct r.user_id) * 100 / count(distinct u.user_id), 2) as percentage
from register r join users u
group by contest_id
order by percentage desc, contest_id;