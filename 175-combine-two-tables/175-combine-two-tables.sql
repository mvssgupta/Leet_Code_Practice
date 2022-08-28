# Write your MySQL query statement below

select ps.firstName , ps.lastName , ad.city , ad.state 
from Person as ps 
left join Address as ad on ps.personId = ad.personId;
