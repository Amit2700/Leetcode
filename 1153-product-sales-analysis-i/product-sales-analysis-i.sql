# Write your MySQL query statement below
SElECT product_name , year , price 
FROM SALES AS S 
LEFT JOIN Product AS P 
ON S.product_id = P.product_id  ;