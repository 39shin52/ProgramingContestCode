package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i <= n; i++ {
		for j := 0; j <= n; j++ {
			for k := 0; k <= n; k++ {
				if (i + k + j) <= n {
					fmt.Printf("%d %d %d\n", i, j, k)
				}
			}
		}
	}
}
