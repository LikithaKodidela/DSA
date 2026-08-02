# Write your MySQL query statement below
SELECT name , bonus FROM Employee  e LEFT JOIN Bonus b ON b.empId = e.empid 
WHERE bonus< 1000 OR bonus is NULL ;