# [level 0] 다항식 더하기 - 120863 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120863) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 05월 29일 18:36:50

### 문제 설명

<p>한 개 이상의 항의 합으로 이루어진 식을 다항식이라고 합니다. 다항식을 계산할 때는 동류항끼리 계산해 정리합니다. 덧셈으로 이루어진 다항식 <code>polynomial</code>이 매개변수로 주어질 때, 동류항끼리 더한 결괏값을 문자열로 return 하도록 solution 함수를 완성해보세요. 같은 식이라면 가장 짧은 수식을 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><p>0 &lt; <code>polynomial</code>에 있는 수 &lt; 100</p></li>
<li><p><code>polynomial</code>에 변수는 'x'만 존재합니다.</p></li>
<li><p><code>polynomial</code>은 양의 정수, 공백, ‘x’, ‘+'로 이루어져 있습니다.</p></li>
<li><p>항과 연산기호 사이에는 항상 공백이 존재합니다.</p></li>
<li><p>공백은 연속되지 않으며 시작이나 끝에는 공백이 없습니다.</p></li>
<li><p>하나의 항에서 변수가 숫자 앞에 오는 경우는 없습니다.</p></li>
<li><p>" + 3xx + + x7 + "와 같은 잘못된 입력은 주어지지 않습니다.</p></li>
<li><p>0으로 시작하는 수는 없습니다.</p></li>
<li><p>문자와 숫자 사이의 곱하기는 생략합니다.</p></li>
<li><p><code>polynomial</code>에는 일차 항과 상수항만 존재합니다.</p></li>
<li><p>계수 1은 생략합니다.</p></li>
<li><p>결괏값에 상수항은 마지막에 둡니다.</p></li>
<li><p>0 &lt; <code>polynomial</code>의 길이 &lt; 50</p></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>polynomial</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"3x + 7 + x"</td>
<td>"4x + 7"</td>
</tr>
<tr>
<td>"x + x + x"</td>
<td>"3x"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>"3x + 7 + x"에서 동류항끼리 더하면 "4x + 7"입니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"x + x + x"에서 동류항끼리 더하면 "3x"입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges