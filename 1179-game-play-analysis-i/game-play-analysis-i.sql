# Write your MySQL query statement below
select  player_id,min(event_date)
as first_login from Activity 
group by player_id;

/*with activity_cte as(
        select player_id, event_date,
        row_number() over (partition by player_id order by event_date) as rn
        from Activity
)
select player_id, event_date as first_login 
from activity_cte
where rn = 1*/