# Write your MySQL query statement below
select name as Employee from Employee as m where salary > (select salary from Employee where id  = m.managerId);