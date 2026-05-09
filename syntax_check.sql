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



CREATE TABLE cloneListPro(

item_id INT PRIMARY KEY,
product_id INT,
pname VARCHAR(255),
inStock CHAR(1),
price DOUBLE,
arrival_days INT,
seller VARCHAR(255),
youSave DOUBLE

);