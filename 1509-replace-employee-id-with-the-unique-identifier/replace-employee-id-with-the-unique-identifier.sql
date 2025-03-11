# Write your MySQL query statement below
select unique_id,name
from Employees 
LEFT join EmployeeUNI on EmployeeUNI.id=Employees.id;