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
