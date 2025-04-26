# Write your MySQL query statement below
delete p from Person p
JOIN Person p2
ON p.Email=p2.Email AND p.Id > p2.Id;