# [level unrated] 2의 영역 - 181894 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181894) 

### 성능 요약

메모리: 19.3 MB, 시간: 18.28 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 6일 23:33:59

### 문제 설명

<p>정수 배열 <code>arr</code>가 주어집니다. 배열 안의 2가 모두 포함된 가장 작은 연속된 부분 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<p>단, <code>arr</code>에 2가 없는 경우 [-1]을 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 100,000

<ul>
<li>1 ≤ <code>arr</code>의 원소 ≤ 10</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 1, 4, 5, 2, 9]</td>
<td>[2, 1, 4, 5, 2]</td>
</tr>
<tr>
<td>[1, 2, 1]</td>
<td>[2]</td>
</tr>
<tr>
<td>[1, 1, 1]</td>
<td>[-1]</td>
</tr>
<tr>
<td>[1, 2, 1, 2, 1, 10, 2, 1]</td>
<td>[2, 1, 2, 1, 10, 2]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>2가 있는 인덱스는 1번, 5번 인덱스뿐이므로 1번부터 5번 인덱스까지의 부분 배열인 [2, 1, 4, 5, 2]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>2가 한 개뿐이므로 [2]를 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>2가 배열에 없으므로 [-1]을 return 합니다.</li>
</ul>

<p>입출력 예 #4</p>

<ul>
<li>2가 있는 인덱스는 1번, 3번, 6번 인덱스이므로 1번부터 6번 인덱스까지의 부분 배열인 [2, 1, 2, 1, 10, 2]를 return 합니다.</li>
</ul>

<hr>

<p>※ 2023년 04월 27일 입출력 예, 입출력 예 설명 및 예시 테스트 케이스가 수정 되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges