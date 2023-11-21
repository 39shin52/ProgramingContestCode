package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	if a == 5 {
		if b == 5 && c == 7 {
			fmt.Println("YES")
			return
		} else if b == 7 && c == 5 {
			fmt.Println("YES")
			return
		}
	} else if a == 7 {
		if b == 5 && c == 5 {
			fmt.Println("YES")
			return
		}
	}

	fmt.Println("NO")
}
