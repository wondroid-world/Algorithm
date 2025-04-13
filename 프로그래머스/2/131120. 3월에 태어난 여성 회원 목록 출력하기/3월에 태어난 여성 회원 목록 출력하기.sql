-- 코드를 입력하세요
SELECT m.MEMBER_ID, m.MEMBER_NAME, m.GENDER, date_format(m.DATE_OF_BIRTH, '%Y-%m-%d') as DATE_OF_BIRTH
from MEMBER_PROFILE as m
where m.gender = 'W'
and date_format(m.date_of_birth, '%m') = '03'
and m.TLNO is not null
order by m.MEMBER_ID asc