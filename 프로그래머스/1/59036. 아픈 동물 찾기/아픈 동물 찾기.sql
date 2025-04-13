-- 코드를 입력하세요
SELECT a.animal_id, a.name
from animal_ins as a
where a.INTAKE_CONDITION = 'Sick'
order by a.animal_id asc