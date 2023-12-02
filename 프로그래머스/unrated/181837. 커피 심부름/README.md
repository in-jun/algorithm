# [level unrated] 커피 심부름 - 181837 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181837) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 22:43:4

### 문제 설명

<p>팀의 막내인 철수는 아메리카노와 카페 라테만 판매하는 카페에서 팀원들의 커피를 사려고 합니다. 아메리카노와 카페 라테의 가격은 차가운 것과 뜨거운 것 상관없이 각각 4500, 5000원입니다. 각 팀원에게 마실 메뉴를 적어달라고 하였고, 그 중에서 메뉴만 적은 팀원의 것은 차가운 것으로 통일하고 "아무거나"를 적은 팀원의 것은 차가운 아메리카노로 통일하기로 하였습니다.</p>

<p>각 직원이 적은 메뉴가 문자열 배열 <code>order</code>로 주어질 때, 카페에서 결제하게 될 금액을 return 하는 solution 함수를 작성해주세요. <code>order</code>의 원소는 아래의 것들만 들어오고, 각각의 의미는 다음과 같습니다.</p>
<table class="table">
        <thead><tr>
<th>order의 원소</th>
<th>의미</th>
</tr>
</thead>
        <tbody><tr>
<td>"iceamericano", "americanoice"</td>
<td>차가운 아메리카노</td>
</tr>
<tr>
<td>"hotamericano", "americanohot"</td>
<td>따뜻한 아메리카노</td>
</tr>
<tr>
<td>"icecafelatte", "cafelatteice"</td>
<td>차가운 카페 라테</td>
</tr>
<tr>
<td>"hotcafelatte", "cafelattehot"</td>
<td>따뜻한 카페 라테</td>
</tr>
<tr>
<td>"americano"</td>
<td>아메리카노</td>
</tr>
<tr>
<td>"cafelatte"</td>
<td>카페 라테</td>
</tr>
<tr>
<td>"anything"</td>
<td>아무거나</td>
</tr>
</tbody>
      </table>
<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>order</code>의 길이 ≤ 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>order</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["cafelatte", "americanoice", "hotcafelatte", "anything"]</td>
<td>19000</td>
</tr>
<tr>
<td>["americanoice", "americano", "iceamericano"]</td>
<td>13500</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번의 입력을 표로 나타내면 다음과 같습니다.</p>
<table class="table">
        <thead><tr>
<th>order[i]</th>
<th>팀원의 적은 음료</th>
<th>실제 주문 음료</th>
</tr>
</thead>
        <tbody><tr>
<td>"cafelatte"</td>
<td>카페 라테</td>
<td>차가운 카페 라테</td>
</tr>
<tr>
<td>"americanoice"</td>
<td>차가운 아메리카노</td>
<td>차가운 아메리카노</td>
</tr>
<tr>
<td>"hotcafelatte"</td>
<td>따뜻한 카페 라테</td>
<td>따뜻한 카페 라테</td>
</tr>
<tr>
<td>"anything"</td>
<td>아무거나</td>
<td>차가운 아메리카노</td>
</tr>
</tbody>
      </table>
<p>철수는 차가운 아메리카노 2잔, 차가운 카페 라테 1잔, 따뜻한 카페 라테 1잔을 주문하게 되므로 결제 금액은 4500 × 2 + 5000 × 2 = 19000원입니다. 따라서 19000을 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 입력에서는 모든 음료를 차가운 아메리카노로 시키게 됩니다. 따라서 결제 금액은 4500 × 3 = 13500원이고 13500을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges