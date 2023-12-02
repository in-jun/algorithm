# [level unrated] 이차원 배열 대각선 순회하기 - 181829 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181829) 

### 성능 요약

메모리: 4.23 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 23:11:40

### 문제 설명

<p>2차원 정수 배열 <code>board</code>와 정수 <code>k</code>가 주어집니다.</p>

<p><code>i</code> + <code>j</code> &lt;= <code>k</code>를 만족하는 모든 (<code>i</code>, <code>j</code>)에 대한 <code>board[i][j]</code>의 합을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ board의 길이 ≤ 100</li>
<li>1 ≤ board[i]의 길이 ≤ 100

<ul>
<li>1 ≤ board[i][j] ≤ 10,000</li>
<li>모든 board[i]의 길이는 같습니다.</li>
</ul></li>
<li>0 ≤ k &lt; board의 길이 + board[i]의 길이</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>board</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[[0, 1, 2],[1, 2, 3],[2, 3, 4],[3, 4, 5]]</td>
<td>2</td>
<td>8</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>입출력 예 #1의 <code>board</code>를 표로 나타내면 다음과 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>i \ j</th>
<th>0</th>
<th>1</th>
<th>2</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td><em>0</em></td>
<td><em>1</em></td>
<td><em>2</em></td>
</tr>
<tr>
<td>1</td>
<td><em>1</em></td>
<td><em>2</em></td>
<td>3</td>
</tr>
<tr>
<td>2</td>
<td><em>2</em></td>
<td>3</td>
<td>4</td>
</tr>
<tr>
<td>3</td>
<td>3</td>
<td>4</td>
<td>5</td>
</tr>
</tbody>
      </table>
<ul>
<li><code>i</code> + <code>j</code>가 2보다 작거나 같은 항들의 합은 0 + 1 + 2 + 1 + 2 + 2 = 8이므로 8을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges