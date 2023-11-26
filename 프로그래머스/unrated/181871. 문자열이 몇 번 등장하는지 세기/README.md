# [level unrated] 문자열이 몇 번 등장하는지 세기 - 181871 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181871) 

### 성능 요약

메모리: 4.13 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 21:35:45

### 문제 설명

<p>문자열 <code>myString</code>과 <code>pat</code>이 주어집니다. <code>myString</code>에서 <code>pat</code>이 등장하는 횟수를 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>myString</code> ≤ 1000</li>
<li>1 ≤ <code>pat</code> ≤ 10</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>myString</th>
<th>pat</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"banana"</td>
<td>"ana"</td>
<td>2</td>
</tr>
<tr>
<td>"aaaa"</td>
<td>"aa"</td>
<td>3</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>"banana"에서 1 ~ 3번 인덱스에서 한 번, 3 ~ 5번 인덱스에서 또 한 번 "ana"가 등장해서 총 두 번 등장합니다. 따라서 2를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"aaaa"에서 0 ~ 2번 인덱스에서 한 번, 1 ~ 3번 인덱스에서 한 번, 2 ~ 4번 인덱스에서 한 번 "aa"가 등장해서 총 세 번 등장합니다. 따라서 3을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges