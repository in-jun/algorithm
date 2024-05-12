# [level 1] 잡은 물고기 중 가장 큰 물고기의 길이 구하기 - 298515 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/298515) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SUM， MAX， MIN

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2024년 05월 12일 17:31:19

### 문제 설명

<p>낚시앱에서 사용하는 <code>FISH_INFO</code> 테이블은 잡은 물고기들의 정보를 담고 있습니다. <code>FISH_INFO</code> 테이블의 구조는 다음과 같으며 <code>ID</code>, <code>FISH_TYPE</code>, <code>LENGTH</code>, <code>TIME</code>은 각각 잡은 물고기의 ID, 물고기의 종류(숫자), 잡은 물고기의 길이(cm), 물고기를 잡은 날짜를 나타냅니다. </p>
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
<td>FISH_TYPE</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>LENGTH</td>
<td>FLOAT</td>
<td>TRUE</td>
</tr>
<tr>
<td>TIME</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p>단, 잡은 물고기의 길이가 10cm 이하일 경우에는 <code>LENGTH</code> 가 NULL 이며, <code>LENGTH</code> 에 NULL 만 있는 경우는 없습니다.</p>

<hr>

<h5>문제</h5>

<p><code>FISH_INFO</code> 테이블에서 잡은 물고기 중 가장 큰 물고기의 길이를 'cm' 를 붙여 출력하는 SQL 문을 작성해주세요.</p>

<p>이 때 컬럼명은 'MAX_LENGTH' 로 지정해주세요.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>FISH_INFO</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>ID</th>
<th>FISH_TYPE</th>
<th>LENGTH</th>
<th>TIME</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>0</td>
<td>13.37</td>
<td>2021/12/04</td>
</tr>
<tr>
<td>1</td>
<td>0</td>
<td>50.00</td>
<td>2020/03/07</td>
</tr>
<tr>
<td>2</td>
<td>0</td>
<td>40.00</td>
<td>2020/03/07</td>
</tr>
<tr>
<td>3</td>
<td>1</td>
<td>43.33</td>
<td>2022/03/09</td>
</tr>
<tr>
<td>4</td>
<td>1</td>
<td>NULL</td>
<td>2022/04/08</td>
</tr>
<tr>
<td>5</td>
<td>2</td>
<td>32.00</td>
<td>2020/04/28</td>
</tr>
</tbody>
      </table>
<p>가장 큰 물고기의 길이는 50cm 이므로 결과는 다음과 같아야 합니다.</p>
<table class="table">
        <thead><tr>
<th>MAX_LENGTH</th>
</tr>
</thead>
        <tbody><tr>
<td>50.00cm</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges