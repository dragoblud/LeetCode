# Write your MySQL query statement below
SELECT m.employee_id, m.name, COUNT(e.employee_id) AS reports_count, ROUND(AVG(e.age)) as average_age 
FROM employees e JOIN employees m ON  e.reports_to = m.employee_id GROUP BY employee_id ORDER BY employee_id;