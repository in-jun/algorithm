# [level 1] 가장 큰 물고기 10마리 구하기 - 298517 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/298517) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SELECT

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2024년 05월 12일 18:54:04

### 문제 설명

<p>낚시앱에서 사용하는 <code>FISH_INFO</code> 테이블은 잡은 물고기들의 정보를 담고 있습니다. <code>FISH_INFO</code> 테이블의 구조는 다음과 같으며 <code>ID</code>, <code>FISH_TYPE</code>, <code>LENGTH</code>, <code>TIME</code>은 각각 잡은 물고기의 ID, 물고기의 종류(숫자), 잡은 물고기의 길이(cm), 물고기를 잡은 날짜를 나타냅니다. </p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>ID</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>FISH_TYPE</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>LENGTH</td>
<td>FLOAT</td>
<td>TRUE</td>
</tr>
<tr>
<td>TIME</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p>단, 잡은 물고기의 길이가 10cm 이하일 경우에는 <code>LENGTH</code> 가 NULL 이며, <code>LENGTH</code> 에 NULL 만 있는 경우는 없습니다.</p>

<hr>

<h5>문제</h5>

<p><code>FISH_INFO</code> 테이블에서 가장 큰 물고기 10마리의 ID와 길이를 출력하는 SQL 문을 작성해주세요. 결과는 길이를 기준으로 내림차순 정렬하고, 길이가 같다면 물고기의 ID에 대해 오름차순 정렬해주세요. 단, 가장 큰 물고기 10마리 중 길이가 10cm 이하인 경우는 없습니다.</p>

<p>ID 컬럼명은 <code>ID</code>, 길이 컬럼명은 <code>LENGTH</code>로  해주세요.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>FISH_INFO</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>ID</th>
<th>FISH_TYPE</th>
<th>LENGTH</th>
<th>TIME</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>0</td>
<td>30</td>
<td>2021/12/04</td>
</tr>
<tr>
<td>1</td>
<td>0</td>
<td>50</td>
<td>2020/03/07</td>
</tr>
<tr>
<td>2</td>
<td>0</td>
<td>40</td>
<td>2020/03/07</td>
</tr>
<tr>
<td>3</td>
<td>1</td>
<td>20</td>
<td>2022/03/09</td>
</tr>
<tr>
<td>4</td>
<td>1</td>
<td>NULL</td>
<td>2022/04/08</td>
</tr>
<tr>
<td>5</td>
<td>2</td>
<td>13</td>
<td>2021/04/28</td>
</tr>
<tr>
<td>6</td>
<td>3</td>
<td>60</td>
<td>2021/07/27</td>
</tr>
<tr>
<td>7</td>
<td>0</td>
<td>55</td>
<td>2021/01/18</td>
</tr>
<tr>
<td>8</td>
<td>2</td>
<td>73</td>
<td>2020/01/28</td>
</tr>
<tr>
<td>9</td>
<td>3</td>
<td>73</td>
<td>2021/04/08</td>
</tr>
<tr>
<td>10</td>
<td>2</td>
<td>22</td>
<td>2020/06/28</td>
</tr>
<tr>
<td>11</td>
<td>2</td>
<td>17</td>
<td>2022/12/23</td>
</tr>
</tbody>
      </table>
<p>이 때 가장 큰 물고기 10마리는 물고기의 ID 4, 5를 제외한 나머지 입니다. 결과를 길이 에 대해 내림차순 정렬하고, 길이가 같다면 물고기의 ID에 대해 오름차순 정렬하면 다음과 같습니다</p>
<table class="table">
        <thead><tr>
<th>ID</th>
<th>LENGTH</th>
</tr>
</thead>
        <tbody><tr>
<td>8</td>
<td>73</td>
</tr>
<tr>
<td>9</td>
<td>73</td>
</tr>
<tr>
<td>6</td>
<td>60</td>
</tr>
<tr>
<td>7</td>
<td>55</td>
</tr>
<tr>
<td>1</td>
<td>50</td>
</tr>
<tr>
<td>2</td>
<td>40</td>
</tr>
<tr>
<td>0</td>
<td>30</td>
</tr>
<tr>
<td>10</td>
<td>22</td>
</tr>
<tr>
<td>3</td>
<td>20</td>
</tr>
<tr>
<td>11</td>
<td>17</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges