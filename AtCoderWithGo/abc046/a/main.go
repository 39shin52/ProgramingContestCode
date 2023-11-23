package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	if a == b {
		if a == c {
			fmt.Println(1)
			return
		}
		fmt.Println(2)
		return
	} else if a == c || b == c {
		fmt.Println(2)
		return
	}

	fmt.Println(3)
}
