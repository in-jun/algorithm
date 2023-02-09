# [Bronze IV] 단순한 문제 (Small) - 25494 

[문제 링크](https://www.acmicpc.net/problem/25494) 

### 성능 요약

메모리: 1112 KB, 시간: 24 ms

### 분류

사칙연산(arithmetic), 브루트포스 알고리즘(bruteforcing), 수학(math)

### 문제 설명

<p>세 양의 정수 $a$, $b$, $c$가 주어질 때, 다음 조건을 만족하는 정수 쌍 $(x, y, z)$의 개수를 구하시오.</p>

<ul>
	<li>$1 \le x \le a$</li>
	<li>$1 \le y \le b$</li>
	<li>$1 \le z \le c$</li>
	<li>$(x\,\bmod\,y) = (y\,\bmod\,z) = (z\,\bmod\,x)$</li>
</ul>

<p>$(A\,\bmod\,B)$는 $A$를 $B$로 나눈 나머지를 의미한다.</p>

### 입력 

 <p>첫째 줄에 테스트 케이스의 수 $T$가 주어진다. $(1 \le T \le 100)$</p>

<p>다음 $T$개의 각 줄에는 세 정수 $a$, $b$, $c$가 공백으로 구분되어 주어진다. $(1 \le a, b, c \le 60)$</p>

### 출력 

 <p>한 줄에 하나씩 정답을 출력한다.</p>

