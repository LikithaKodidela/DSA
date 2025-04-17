# Write your MySQL query statement below
select name from SalesPerson where sales_id not in
(select sales_id from 
Orders o join Company C on o.com_id=C.com_id where name='RED') 