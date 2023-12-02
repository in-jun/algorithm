# [level unrated] 날짜 비교하기 - 181838 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181838) 

### 성능 요약

메모리: 4.01 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 22:33:4

### 문제 설명

<p>정수 배열 <code>date1</code>과 <code>date2</code>가 주어집니다. 두 배열은 각각 날짜를 나타내며 <code>[year, month, day]</code> 꼴로 주어집니다. 각 배열에서 <code>year</code>는 연도를, <code>month</code>는 월을, <code>day</code>는 날짜를 나타냅니다.</p>

<p>만약 <code>date1</code>이 <code>date2</code>보다 앞서는 날짜라면 1을, 아니면 0을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>date1</code>의 길이 = <code>date2</code>의 길이 = 3

<ul>
<li>0 ≤ <code>year</code> ≤ 10,000</li>
<li>1 ≤ <code>month</code> ≤ 12</li>
<li><code>day</code>는 <code>month</code>에 따라 가능한 날짜로 주어집니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>date1</th>
<th>date2</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[2021, 12, 28]</td>
<td>[2021, 12, 29]</td>
<td>1</td>
</tr>
<tr>
<td>[1024, 10, 24]</td>
<td>[1024, 10, 24]</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>date1</code>이 <code>date2</code>보다 하루 앞서기 때문에 1을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>date1</code>과 <code>date2</code>는 날짜가 서로 같으므로 <code>date1</code>이 더 앞서는 날짜가 아닙니다. 따라서 0을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges