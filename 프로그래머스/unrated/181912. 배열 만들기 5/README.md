# [level unrated] 배열 만들기 5 - 181912 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181912) 

### 성능 요약

메모리: 5.52 MB, 시간: 1.45 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 6일 1:31:17

### 문제 설명

<p>문자열 배열 <code>intStrs</code>와 정수 <code>k</code>, <code>s</code>, <code>l</code>가 주어집니다. <code>intStrs</code>의 원소는 숫자로 이루어져 있습니다. </p>

<p>배열 <code>intStrs</code>의 각 원소마다 <code>s</code>번 인덱스에서 시작하는 길이 <code>l</code>짜리 부분 문자열을 잘라내 정수로 변환합니다. 이때 변환한 정수값이 <code>k</code>보다 큰 값들을 담은 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>0 ≤ <code>s</code> &lt; 100</li>
<li>1 ≤ <code>l</code> ≤ 8</li>
<li>10<sup>l - 1</sup> ≤ <code>k</code> &lt; 10<sup>l</sup></li>
<li>1 ≤ <code>intStrs</code>의 길이 ≤ 10,000

<ul>
<li><code>s</code> + <code>l</code> ≤ <code>intStrs</code>의 원소의 길이 ≤ 120</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>intStrs</th>
<th>k</th>
<th>s</th>
<th>l</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["0123456789","9876543210","9999999999999"]</td>
<td>50000</td>
<td>5</td>
<td>5</td>
<td>[56789, 99999]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>idx에 따라 잘라낸 문자열과 그에 따른 <code>ret</code>의 변화를 표시하면 다음 표와 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>idx</th>
<th>잘라낸 문자열</th>
<th>ret</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>"56789"</td>
<td>[56789]</td>
</tr>
<tr>
<td>1</td>
<td>"43210"</td>
<td>[56789]</td>
</tr>
<tr>
<td>2</td>
<td>"99999"</td>
<td>[56789, 99999]</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 [56789, 99999]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges