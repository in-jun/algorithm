# [level unrated] 두 수의 합 - 181846 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181846?language=python3) 

### 성능 요약

메모리: 10.5 MB, 시간: 182.72 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 21:19:57

### 문제 설명

<p>0 이상의 두 정수가 <strong>문자열</strong> <code>a</code>, <code>b</code>로 주어질 때, <code>a</code> + <code>b</code>의 값을 문자열로 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>a</code>의 길이 ≤ 100,000</li>
<li>1 ≤ <code>b</code>의 길이 ≤ 100,000</li>
<li><code>a</code>와 <code>b</code>는 숫자로만 이루어져 있습니다.</li>
<li><code>a</code>와 <code>b</code>는 정수 0이 아니라면 0으로 시작하지 않습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>a</th>
<th>b</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"582"</td>
<td>"734"</td>
<td>"1316"</td>
</tr>
<tr>
<td>"18446744073709551615"</td>
<td>"287346502836570928366"</td>
<td>"305793246910280479981"</td>
</tr>
<tr>
<td>"0"</td>
<td>"0"</td>
<td>"0"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>a</code>, <code>b</code>는 각각 582, 734이고 582 + 734 = 1316입니다. 따라서 "1316"을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>a</code>, <code>b</code>는 각각 18446744073709551615, 287346502836570928366이고 18446744073709551615 + 287346502836570928366 = 305793246910280479981입니다. 따라서 "305793246910280479981"을 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>예제 3번의 <code>a</code>, <code>b</code>는 각각 0, 0이고 0 + 0 = 0입니다. 따라서 "0"을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges