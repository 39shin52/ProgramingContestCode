package main

import "fmt"

func main() {
	var h, w int
	fmt.Scan(&h, &w)

	c := make([]string, 0)

	for i := 0; i < h; i++ {
		var t string
		fmt.Scan(&t)

		c = append(c, t, t)
	}

	for _, v := range c {
		fmt.Println(v)
	}
}
