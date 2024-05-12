# [level 1] 특정 형질을 가지는 대장균 찾기 - 301646 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/301646) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SELECT

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2024년 05월 12일 20:14:38

### 문제 설명

<p>대장균들은 일정 주기로 분화하며, 분화를 시작한 개체를 부모 개체, 분화가 되어 나온 개체를 자식 개체라고 합니다.<br>
다음은 실험실에서 배양한 대장균들의 정보를 담은 <code>ECOLI_DATA</code> 테이블입니다. <code>ECOLI_DATA</code> 테이블의 구조는 다음과 같으며,  <code>ID</code>, <code>PARENT_ID</code>, <code>SIZE_OF_COLONY</code>, <code>DIFFERENTIATION_DATE</code>, <code>GENOTYPE</code> 은 각각 대장균 개체의 ID, 부모 개체의 ID, 개체의 크기, 분화되어 나온 날짜, 개체의 형질을 나타냅니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>ID</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>PARENT_ID</td>
<td>INTEGER</td>
<td>TRUE</td>
</tr>
<tr>
<td>SIZE_OF_COLONY</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>DIFFERENTIATION_DATE</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
<tr>
<td>GENOTYPE</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p>최초의 대장균 개체의 <code>PARENT_ID</code> 는 NULL 값입니다.</p>

<hr>

<h5>문제</h5>

<p>2번 형질이 보유하지 않으면서 1번이나 3번 형질을 보유하고 있는 대장균 개체의 수(<code>COUNT</code>)를 출력하는 SQL 문을 작성해주세요. 1번과 3번 형질을 모두 보유하고 있는 경우도 1번이나 3번 형질을 보유하고 있는 경우에 포함합니다.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>ECOLI_DATA</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>ID</th>
<th>PARENT_ID</th>
<th>SIZE_OF_COLONY</th>
<th>DIFFERENTIATION_DATE</th>
<th>GENOTYPE</th>
</tr>
</thead>
        <tbody><tr>
<td>1</td>
<td>NULL</td>
<td>10</td>
<td>2019/01/01</td>
<td>8</td>
</tr>
<tr>
<td>2</td>
<td>NULL</td>
<td>2</td>
<td>2019/01/01</td>
<td>15</td>
</tr>
<tr>
<td>3</td>
<td>2</td>
<td>100</td>
<td>2020/01/01</td>
<td>1</td>
</tr>
<tr>
<td>4</td>
<td>2</td>
<td>16</td>
<td>2020/01/01</td>
<td>13</td>
</tr>
</tbody>
      </table>
<p>각 대장균 별 형질을 2진수로 나타내면 다음과 같습니다.</p>

<p>ID 1 : 1000₍₂₎<br>
ID 2 : 1111₍₂₎<br>
ID 3 : 1₍₂₎<br>
ID 4 : 1101₍₂₎</p>

<p>각 대장균 별 보유한 형질을 다음과 같습니다.</p>

<p>ID 1 : 4<br>
ID 2 : 1, 2, 3, 4<br>
ID 3 : 1<br>
ID 4 : 1, 3, 4</p>

<p>따라서 2번 형질이 없는 대장균 개체는 ID 1, ID 3, ID 4 이며 이 중 1번이나 3번 형질을 보유한 대장균 개체는 ID 3, ID 4 입니다. </p>

<p>따라서 결과는 다음과 같아야 합니다.</p>
<table class="table">
        <thead><tr>
<th>COUNT</th>
</tr>
</thead>
        <tbody><tr>
<td>2</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges