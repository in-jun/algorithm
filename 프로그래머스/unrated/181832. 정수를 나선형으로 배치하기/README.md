# [level unrated] 정수를 나선형으로 배치하기 - 181832 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181832) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.20 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 0일 0:15:47

### 문제 설명

<p>양의 정수 <code>n</code>이 매개변수로 주어집니다. <code>n</code> × <code>n</code> 배열에 1부터 <code>n</code><sup>2</sup> 까지 정수를 인덱스 [0][0]부터 시계방향 나선형으로 배치한 이차원 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>n</code> ≤ 30</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>4</td>
<td>[[1, 2, 3, 4], [12, 13, 14, 5], [11, 16, 15, 6], [10, 9, 8, 7]]</td>
</tr>
<tr>
<td>5</td>
<td>[[1, 2, 3, 4, 5], [16, 17, 18, 19, 6], [15, 24, 25, 20, 7], [14, 23, 22, 21, 8], [13, 12, 11, 10, 9]]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번의 <code>n</code>의 값은 4로 4 × 4 배열에 다음과 같이 1부터 16까지 숫자를 채울 수 있습니다.</p>
<table class="table">
        <thead><tr>
<th>행 \ 열</th>
<th>0</th>
<th>1</th>
<th>2</th>
<th>3</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>1</td>
<td>2</td>
<td>3</td>
<td>4</td>
</tr>
<tr>
<td>1</td>
<td>12</td>
<td>13</td>
<td>14</td>
<td>5</td>
</tr>
<tr>
<td>2</td>
<td>11</td>
<td>16</td>
<td>15</td>
<td>6</td>
</tr>
<tr>
<td>3</td>
<td>10</td>
<td>9</td>
<td>8</td>
<td>7</td>
</tr>
</tbody>
      </table>
<p>따라서 [[1, 2, 3, 4], [12, 13, 14, 5], [11, 16, 15, 6], [10, 9, 8, 7]]를 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><p>예제 2번의 <code>n</code>의 값은 5로 5 × 5 배열에 다음과 같이 1부터 25까지 숫자를 채울 수 있습니다.</p>
<table class="table">
        <thead><tr>
<th>행 \ 열</th>
<th>0</th>
<th>1</th>
<th>2</th>
<th>3</th>
<th>4</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>1</td>
<td>2</td>
<td>3</td>
<td>4</td>
<td>5</td>
</tr>
<tr>
<td>1</td>
<td>16</td>
<td>17</td>
<td>18</td>
<td>19</td>
<td>6</td>
</tr>
<tr>
<td>2</td>
<td>15</td>
<td>24</td>
<td>25</td>
<td>20</td>
<td>7</td>
</tr>
<tr>
<td>3</td>
<td>14</td>
<td>23</td>
<td>22</td>
<td>21</td>
<td>8</td>
</tr>
<tr>
<td>4</td>
<td>13</td>
<td>12</td>
<td>11</td>
<td>10</td>
<td>9</td>
</tr>
</tbody>
      </table>
<p>따라서 [[1, 2, 3, 4, 5], [16, 17, 18, 19, 6], [15, 24, 25, 20, 7], [14, 23, 22, 21, 8], [13, 12, 11, 10, 9]]를 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges