# Write your MySQL query statement below
select e.name 
from( select e1.id, e1.name, count(e2.managerID) as cnt from employee as e1 inner join employee as e2 on e1.id = e2.managerID
        group by e1.id having cnt >= 5
    ) as e;