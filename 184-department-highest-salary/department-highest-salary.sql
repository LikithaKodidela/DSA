# Write your MySQL query statement below
/*select 
      d.name as 'Deparment' ,
      e.name as 'Employee',
      e.salary as'Salary'
 from 
 (
     select *,rank() over(partition by departmentId order by salary desc) rnk
     from Employee
 )e
LEFT  JOIN Department d on e.departmentId=d.id
where e.rnk=1*/
SELECT 
    d.name AS 'Department',
    e.name AS 'Employee',
    e.salary AS 'Salary'
FROM Employee e
JOIN Department d ON e.departmentId = d.id
WHERE e.salary = (
    SELECT MAX(salary)
    FROM Employee
    WHERE departmentId = e.departmentId
);
