-- 코드를 입력하세요
SELECT F.FLAVOR
FROM FIRST_HALF AS F, ICECREAM_INFO AS I
WHERE F.TOTAL_ORDER > 3000
AND I.INGREDIENT_TYPE = 'fruit_based'
AND F.FLAVOR = I.FLAVOR
ORDER BY F.TOTAL_ORDER DESC;
# select *
# from FIRST_HALF;