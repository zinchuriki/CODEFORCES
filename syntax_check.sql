-- # Write your MySQL query statement below

select customer_id
from(
select customer_id, product_key
    from Customer
    GROUP BY customer_id,product_key
) AS customer_id
GROUP BY customer_id
HAVING COUNT(*)=(SELECT COUNT(*)
from Product)