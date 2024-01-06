package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)

	t := []rune(s)
	res := string(t[:len(t)-1])
	res += "4"
	fmt.Println(res)
}
