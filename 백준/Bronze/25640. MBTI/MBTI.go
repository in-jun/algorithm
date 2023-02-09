package main

import "fmt"

func main() {
	var n int
	var count int = 0
	var a, b string
	fmt.Scanf("%s", &a)
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%s", &b)
		if a == b {
			count++
		}
	}
	fmt.Printf("%d", count)
}
