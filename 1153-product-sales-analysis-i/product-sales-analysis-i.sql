# Write your MySQL query statement below
select product_name,year,price from Product
JOIN Sales on Product.product_id=Sales.product_id;