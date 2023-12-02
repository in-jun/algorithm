# [level unrated] 배열의 길이를 2의 거듭제곱으로 만들기 - 181857 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181857) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 17:48:15

### 문제 설명

<p>정수 배열 <code>arr</code>이 매개변수로 주어집니다. <code>arr</code>의 길이가 2의 정수 거듭제곱이 되도록 <code>arr</code> 뒤에 정수 0을 추가하려고 합니다. <code>arr</code>에 최소한의 개수로 0을 추가한 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 1,000</li>
<li>1 ≤ <code>arr</code>의 원소 ≤ 1,000</li>
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
<td>[1, 2, 3, 4, 5, 6]</td>
<td>[1, 2, 3, 4, 5, 6, 0, 0]</td>
</tr>
<tr>
<td>[58, 172, 746, 89]</td>
<td>[58, 172, 746, 89]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>arr</code>의 길이는 6입니다. <code>arr</code>의 길이를 2의 정수 거듭제곱으로 만드는 방법은 0을 2개, 10개, 26개,..., 추가하는 방법이 있고 그중 최소한으로 0을 추가하는 방법은 2개를 추가하는 것입니다. 따라서 [1, 2, 3, 4, 5, 6, 0, 0]을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>arr</code>의 길이는 4이고 이미 2의 정수 거듭제곱입니다. 따라서 뒤에 0을 추가하지 않아도 되므로 [58, 172, 746, 89]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges