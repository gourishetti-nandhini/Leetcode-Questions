-- select
-- SalesPerson.name
-- from 
-- SalesPerson inner join 
-- Orders
-- on SalesPerson.sales_id=orders.sales_id
-- inner join company 
-- on Orders.com_id=company.com_id
-- where
-- company.name like "RED";

SELECT name
FROM SalesPerson
WHERE sales_id NOT IN (
    SELECT o.sales_id
    FROM Orders o
    JOIN Company c ON o.com_id = c.com_id
    WHERE c.name = 'RED'
);


