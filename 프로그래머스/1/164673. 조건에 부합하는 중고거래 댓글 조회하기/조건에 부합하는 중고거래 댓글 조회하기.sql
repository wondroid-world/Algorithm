-- 코드를 입력하세요
SELECT b.TITLE, r.BOARD_ID, r.REPLY_ID, r.WRITER_ID, r.CONTENTS, DATE_FORMAT(r.CREATED_DATE,'%Y-%m-%d') as CREATED_DATE
From USED_GOODS_BOARD as B
join USED_GOODS_REPLY as r on b.BOARD_ID = r.BOARD_ID
where b.created_date between '2022-10-01' and '2022-10-31'
order by r.created_date asc, b.title asc
