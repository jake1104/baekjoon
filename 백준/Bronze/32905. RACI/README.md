# [Bronze IV] RACI - 32905 

[문제 링크](https://www.acmicpc.net/problem/32905) 

### 성능 요약

메모리: 108384 KB, 시간: 96 ms

### 분류

구현

### 제출 일자

2025년 4월 27일 15:21:32

### 문제 설명

<p>Nikolai assigned students the task of creating a RACI matrix for a project during management lectures. This is a responsibility assignment matrix that lists all stakeholders of the project and their levels of involvement in different tasks. The levels are denoted by the letters "<code>R</code>", "<code>A</code>", "<code>C</code>", and "<code>I</code>". If there is no involvement, "<code>-</code>" is used. The levels of involvement have the following meaning:</p>

<ul>
	<li><code>R</code> (<em>Responsible</em>): performs the task (if they are absent, then <em>Accountable</em> performs the whole task)</li>
	<li><code>A</code> (<em>Accountable</em>): accepts the task from <em>Responsible</em>; for each task, there must be exactly one instance of this level of involvement, unlike the other levels, of which there can be any number</li>
	<li><code>C</code> (<em>Consulted</em>): provides consultation during the execution of the task</li>
	<li><code>I</code> (<em>Informed</em>): receives information about the progress of the task</li>
</ul>

<p>Help the students verify the correctness of the matrix.</p>

### 입력 

 <p>The first line contains two integers $n$ and $m$: the number of rows and columns of the RACI matrix ($1 \le n, m \le 100$).</p>

<p>Next, $n$ rows are listed, each containing $m$ elements separated by spaces.</p>

<p>Each row represents a task, and each column corresponds to a stakeholder.</p>

<p>Each element of the matrix can be either an uppercase letter "<code>R</code>", "<code>A</code>", "<code>C</code>", or "<code>I</code>", or a minus sign, "<code>-</code>", indicating that the given stakeholder has no level of involvement in this task.</p>

### 출력 

 <p>Print "<code>Yes</code>" if the matrix is correct, or "<code>No</code>" otherwise.</p>

