# Write your MySQL query statement below
with cte
as (
    select num,
    Lead(num,1) over()as num1,
    Lead(num,2) over() as num2
    from Logs
)
select distinct  num as ConsecutiveNums
from cte where (num=num1) and (num=num2);