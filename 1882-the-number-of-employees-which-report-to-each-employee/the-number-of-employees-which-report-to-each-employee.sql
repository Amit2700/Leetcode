# Write your MySQL query statement below
SELECT e.employee_id , e.name , f.reports_count , f.average_age 
FROM Employees e 
INNER JOIN (SELECT reports_to AS manager_id , COUNT(employee_id) AS reports_count , ROUND(AVG(age)) AS average_age 
FROM Employees 
GROUP BY reports_to) f 
ON e.employee_id = f.manager_id 
ORDER BY e.employee_id ;