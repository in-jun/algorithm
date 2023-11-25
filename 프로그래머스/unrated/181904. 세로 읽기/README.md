# [level unrated] 세로 읽기 - 181904 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181904) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 0:11:2

### 문제 설명

<p>문자열 <code>my_string</code>과 두 정수 <code>m</code>, <code>c</code>가 주어집니다. <code>my_string</code>을 한 줄에 <code>m</code> 글자씩 가로로 적었을 때 왼쪽부터 세로로 <code>c</code>번째 열에 적힌 글자들을 문자열로 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>my_string</code>은 영소문자로 이루어져 있습니다.</li>
<li>1 ≤ <code>m</code> ≤ <code>my_string</code>의 길이 ≤ 1,000</li>
<li><code>m</code>은 <code>my_string</code> 길이의 약수로만 주어집니다.</li>
<li>1 ≤ <code>c</code> ≤ <code>m</code></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>m</th>
<th>c</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"ihrhbakrfpndopljhygc"</td>
<td>4</td>
<td>2</td>
<td>"happy"</td>
</tr>
<tr>
<td>"programmers"</td>
<td>1</td>
<td>1</td>
<td>"programmers"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번의 <code>my_string</code>을 한 줄에 4 글자씩 쓰면 다음의 표와 같습니다.</p>
<table class="table">
        <thead><tr>
<th>1열</th>
<th>2열</th>
<th>3열</th>
<th>4열</th>
</tr>
</thead>
        <tbody><tr>
<td>i</td>
<td>h</td>
<td>r</td>
<td>h</td>
</tr>
<tr>
<td>b</td>
<td>a</td>
<td>k</td>
<td>r</td>
</tr>
<tr>
<td>f</td>
<td>p</td>
<td>n</td>
<td>d</td>
</tr>
<tr>
<td>o</td>
<td>p</td>
<td>l</td>
<td>j</td>
</tr>
<tr>
<td>h</td>
<td>y</td>
<td>g</td>
<td>c</td>
</tr>
</tbody>
      </table>
<p>2열에 적힌 글자를 세로로 읽으면 happy이므로 "happy"를 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>my_string</code>은 <code>m</code>이 1이므로 세로로 "programmers"를 적는 것과 같고 따라서 1열에 적힌 글자를 세로로 읽으면 programmers입니다. 따라서 "programmers"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges