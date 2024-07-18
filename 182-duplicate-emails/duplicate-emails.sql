# Write your MySQL query statement below
select email from Person as Email group by email having count(email)>1;