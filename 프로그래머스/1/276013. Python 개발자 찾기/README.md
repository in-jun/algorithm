# [level 1] Python 개발자 찾기 - 276013 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/276013) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SELECT

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2024년 05월 12일 18:41:48

### 문제 설명

<p><code>DEVELOPER_INFOS</code> 테이블은 개발자들의 프로그래밍 스킬 정보를 담은 테이블입니다. <code>DEVELOPER_INFOS</code> 테이블 구조는 다음과 같으며, <code>ID</code>, <code>FIRST_NAME</code>, <code>LAST_NAME</code>, <code>EMAIL</code>, <code>SKILL_1</code>, <code>SKILL_2</code>, <code>SKILL_3</code>는 각각 ID,  이름, 성, 이메일, 첫 번째 스킬, 두 번째 스킬, 세 번째 스킬을 의미합니다.</p>
<table class="table">
        <thead><tr>
<th>NAME</th>
<th>TYPE</th>
<th>UNIQUE</th>
<th>NULLABLE</th>
</tr>
</thead>
        <tbody><tr>
<td>ID</td>
<td>VARCHAR(N)</td>
<td>Y</td>
<td>N</td>
</tr>
<tr>
<td>FIRST_NAME</td>
<td>VARCHAR(N)</td>
<td>N</td>
<td>Y</td>
</tr>
<tr>
<td>LAST_NAME</td>
<td>VARCHAR(N)</td>
<td>N</td>
<td>Y</td>
</tr>
<tr>
<td>EMAIL</td>
<td>VARCHAR(N)</td>
<td>Y</td>
<td>N</td>
</tr>
<tr>
<td>SKILL_1</td>
<td>VARCHAR(N)</td>
<td>N</td>
<td>Y</td>
</tr>
<tr>
<td>SKILL_2</td>
<td>VARCHAR(N)</td>
<td>N</td>
<td>Y</td>
</tr>
<tr>
<td>SKILL_3</td>
<td>VARCHAR(N)</td>
<td>N</td>
<td>Y</td>
</tr>
</tbody>
      </table>
<hr>

<h5>문제</h5>

<p><code>DEVELOPER_INFOS</code> 테이블에서 Python 스킬을 가진 개발자의 정보를 조회하려 합니다. Python 스킬을 가진 개발자의 ID, 이메일, 이름, 성을 조회하는 SQL 문을 작성해 주세요. </p>

<p>결과는 ID를 기준으로 오름차순 정렬해 주세요.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>DEVELOPER_INFOS</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>ID</th>
<th>FIRST_NAME</th>
<th>LAST_NAME</th>
<th>EMAIL</th>
<th>SKILL_1</th>
<th>SKILL_2</th>
<th>SKILL_3</th>
</tr>
</thead>
        <tbody><tr>
<td>D165</td>
<td>Jerami</td>
<td>Edwards</td>
<td><code>jerami_edwards@grepp.co</code></td>
<td>Java</td>
<td>JavaScript</td>
<td>Python</td>
</tr>
<tr>
<td>D161</td>
<td>Carsen</td>
<td>Garza</td>
<td><code>carsen_garza@grepp.co</code></td>
<td>React</td>
<td></td>
<td></td>
</tr>
<tr>
<td>D164</td>
<td>Kelly</td>
<td>Grant</td>
<td><code>kelly_grant@grepp.co</code></td>
<td>C#</td>
<td></td>
<td></td>
</tr>
<tr>
<td>D163</td>
<td>Luka</td>
<td>Cory</td>
<td><code>luka_cory@grepp.co</code></td>
<td>Node.js</td>
<td></td>
<td></td>
</tr>
<tr>
<td>D162</td>
<td>Cade</td>
<td>Cunningham</td>
<td><code>cade_cunningham@grepp.co</code></td>
<td>Vue</td>
<td>C++</td>
<td>Python</td>
</tr>
</tbody>
      </table>
<p>다음과 같이 Python 스킬을 가진 개발자의 정보가 결과에 나와야 합니다.</p>
<table class="table">
        <thead><tr>
<th>ID</th>
<th>EMAIL</th>
<th>FIRST_NAME</th>
<th>LAST_NAME</th>
</tr>
</thead>
        <tbody><tr>
<td>D162</td>
<td><code>cade_cunningham@grepp.co</code></td>
<td>Cade</td>
<td>Cunningham</td>
</tr>
<tr>
<td>D165</td>
<td><code>jerami_edwards@grepp.co</code></td>
<td>Jerami</td>
<td>Edwards</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges