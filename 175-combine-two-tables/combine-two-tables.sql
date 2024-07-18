# Write your MySQL query statement below
select firstName,lastName,City,State from Person left join Address on Person.personId = Address.personId;