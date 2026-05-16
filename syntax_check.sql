-- # Write your MySQL query statement below

select customer_id
from(
select customer_id, product_key
    from Customer
    GROUP BY customer_id,product_key
) AS customer_id
GROUP BY customer_id
HAVING COUNT(*)=(SELECT COUNT(*)
from Product);



CREATE TABLE cloneListPro
(

    item_id INT PRIMARY KEY,
    product_id INT,
    pname VARCHAR(255),
    inStock CHAR(1),
    price DECIMAL(10,2),
    arrival_days INT,
    seller VARCHAR(255),
    youSave DECIMAL(10,2)

);

select SUM(e.Count)
from ENGINEER e
    JOIN DATA d ON e.ID=d.ID
GROUP BY e.Count
ORDER BY d.Type;


select SUM(orders.Sales), m.Segment_Manager AS Segment_Manager
from orders
    JOIN manager m ON  orders.Segment=m.Segment
WHERE orders.Order_Date NOT LIKE '%-20'
GROUP BY m.Segment_Manager


SELECT
    o.customer_id AS customer_id,
    o.product_id AS product_id,
    p.product_name AS product_name
FROM Orders o
    JOIN Products p ON o.product_id = p.product_id
GROUP BY o.customer_id, o.product_id, p.product_name
HAVING COUNT(o.order_id) = (
    SELECT MAX(cnt)
FROM (
        SELECT COUNT(order_id) as cnt
    FROM Orders
    WHERE customer_id = o.customer_id
    GROUP BY product_id
    ) as temp
)
ORDER BY o.customer_id;




SELECT i.invoice_id AS invoice_id, p.name AS name, SUM(i.rest) AS rest, SUM(i.paid) AS paid, SUM(i.cancelled) AS cancelled, SUM(i.refunded) AS refunded
FROM Product p
    LEFT JOIN Invoice i ON p.product_id=i.product_id
GROUP BY name;


select e.employee_id as employee_id, e.name as name, COUNT(*) AS reports_count , AVG(e.age) AS age
from Employees e, Employee f
WHERE e.employee_id=f.reports_to
GROUP BY employee_id
ORDER BY employee_id;



select i.Title as title , i.Rating as rating
FROM IMDB i
    JOIN earning e ON e.Movie_id=i.Movie_id
WHERE i.Title LIKE '%2012%' AND i.MetaCritic>60 AND e.Domestic>100000000