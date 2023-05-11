# [Gold IV] PPAP - 16120 

[문제 링크](https://www.acmicpc.net/problem/16120) 

### 성능 요약

메모리: 5872 KB, 시간: 52 ms

### 분류

자료 구조, 그리디 알고리즘, 스택, 문자열

### 문제 설명

<p>bryan은 PPAP를 좋아한다. bryan은 어떻게 하면 사람들에게 PPAP를 전파할 수 있을까 고민하던 중 <strong>PPAP 문자열</strong>이라는 것을 고안하게 되었다.</p>

<p>PPAP 문자열은 문자열 <code>P</code>에서 시작하여, 문자열 내의 <code>P</code>를 <code>PPAP</code>로 바꾸는 과정을 반복하여 만들 수 있는 문자열로 정의된다. 정확하게는 다음과 같이 정의된다.</p>

<ul>
	<li><code>P</code>는 PPAP 문자열이다.</li>
	<li>PPAP 문자열에서 <code>P</code> 하나를 <code>PPAP</code>로 바꾼 문자열은 PPAP 문자열이다.</li>
</ul>

<p>예를 들어 <code>PPAP</code>는 PPAP 문자열이다. 또한, <code>PPAP</code>의 두 번째 <code>P</code>를 <code>PPAP</code>로 바꾼 <code>PPPAPAP</code> 역시 PPAP 문자열이다.</p>

<p>문자열이 주어졌을 때, 이 문자열이 PPAP 문자열인지 아닌지를 알려주는 프로그램을 작성하여라.</p>

### 입력 

 <p>첫 번째 줄에 문자열이 주어진다. 문자열은 대문자 알파벳 <code>P</code>와 <code>A</code>로만 이루어져 있으며, 문자열의 길이는 1 이상 1,000,000 이하이다.</p>

### 출력 

 <p>첫 번째 줄에 주어진 문자열이 PPAP 문자열이면 <code>PPAP</code>를, 아닌 경우 <code>NP</code>를 출력한다.</p>

