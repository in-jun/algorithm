# [level unrated] 배열 만들기 2 - 181921 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181921) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.10 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 1일 0:4:41

### 문제 설명

<p>정수 <code>l</code>과 <code>r</code>이 주어졌을 때, <code>l</code> 이상 <code>r</code>이하의 정수 중에서 숫자 "0"과 "5"로만 이루어진 모든 정수를 오름차순으로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<p>만약 그러한 정수가 없다면, -1이 담긴 배열을 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>l</code> ≤ <code>r</code> ≤ 1,000,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>l</th>
<th>r</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>5</td>
<td>555</td>
<td>[5, 50, 55, 500, 505, 550, 555]</td>
</tr>
<tr>
<td>10</td>
<td>20</td>
<td>[-1]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>5 이상 555 이하의 0과 5로만 이루어진 정수는 작은 수부터 5, 50, 55, 500, 505, 550, 555가 있습니다. 따라서 [5, 50, 55, 500, 505, 550, 555]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>10 이상 20 이하이면서 0과 5로만 이루어진 정수는 없습니다. 따라서 [-1]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges