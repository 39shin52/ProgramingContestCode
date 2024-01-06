package main

import "fmt"

func main() {
	var n, m int
	fmt.Scan(&n)

	tn := make([]int, 0)
	for i := 0; i < n; i++ {
		var t int
		fmt.Scan(&t)
		tn = append(tn, t)
	}

	fmt.Scan(&m)
	for j := 0; j < m; j++ {
		var p, x, ans int
		fmt.Scan(&p, &x)

		for k := 0; k < n; k++ {
			if k == p-1 {
				ans += x
			} else {
				ans += tn[k]
			}
		}

		fmt.Println(ans)
	}
}
