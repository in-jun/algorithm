# [Bronze V] 코딩은 체육과목 입니다 - 25314 

[문제 링크](https://www.acmicpc.net/problem/25314) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

구현(implementation)

### 문제 설명

<p style="margin-bottom: 15px;"><img alt="" src="" style="display: block; margin-left: auto; margin-right: auto; width: 100%; max-width: 400px;"></p>

<p>오늘은 혜아의 면접 날이다. 면접 준비를 열심히 해서 앞선 질문들을 잘 대답한 혜아는 이제 마지막으로 칠판에 직접 코딩하는 문제를 받았다. 혜아가 받은 문제는 두 수를 더하는 문제였다. C++ 책을 열심히 읽었던 혜아는 간단히 두 수를 더하는 코드를 칠판에 적었다. 코드를 본 면접관은 다음 질문을 했다. “만약, 입출력이 $N$바이트 크기의 정수라면 프로그램을 어떻게 구현해야 할까요?”</p>

<p>혜아는 책에 있는 정수 자료형과 관련된 내용을 기억해 냈다. 책에는 <span style="color:#e74c3c;"><code>long int</code></span>는 $4$바이트 정수까지 저장할 수 있는 정수 자료형이고 <span style="color:#e74c3c;"><code>long long int</code></span>는 $8$바이트 정수까지 저장할 수 있는 정수 자료형이라고 적혀 있었다. 혜아는 이런 생각이 들었다. “<span style="color:#e74c3c;"><code>int</code></span> 앞에 <span style="color:#e74c3c;"><code>long</code></span>을 하나씩 더 붙일 때마다 $4$바이트씩 저장할 수 있는 공간이 늘어나는 걸까? 분명 <span style="color:#e74c3c;"><code>long long long int</code></span>는 $12$바이트, <span style="color:#e74c3c;"><code>long long long long int</code></span>는 $16$바이트까지 저장할 수 있는 정수 자료형일 거야!” 그렇게 혜아는 당황하는 면접관의 얼굴을 뒤로한 채 칠판에 정수 자료형을 써 내려가기 시작했다.</p>

<p>혜아가 $N$바이트 정수까지 저장할 수 있다고 생각해서 칠판에 쓴 정수 자료형의 이름은 무엇일까?</p>

### 입력 

 <p>첫 번째 줄에는 문제의 정수 $N$이 주어진다. $(4\le N\le 1\, 000$; $N$은 $4$의 배수$)$</p>

### 출력 

 <p>혜아가 $N$바이트 정수까지 저장할 수 있다고 생각하는 정수 자료형의 이름을 출력하여라.</p>

