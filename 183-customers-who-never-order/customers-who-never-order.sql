# Write your MySQL query statement below
/*
 from Customers where id not in
  (select customerId 
   from Orders
  );*/
  # Write your MySQL query statement below
SELECT c.name AS Customers 
FROM Customers c LEFT JOIN Orders o 
ON c.id=o.customerId 
WHERE o.customerId IS NULL;

