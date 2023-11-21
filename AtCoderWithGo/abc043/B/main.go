package main

import (
	"fmt"
)

func main() {
	var s string
	res := make([]string, 0)
	fmt.Scan(&s)

	for i := 0; i < len(s); i++ {
		if s[i] == '1' {
			res = append(res, string(s[i]))
		} else if s[i] == '0' {
			res = append(res, string(s[i]))
		} else if s[i] == 'B' {
			if len(res) != 0 {
				res = res[:len(res)-1]
			}
		}
	}

	for _, v := range res {
		fmt.Print(v)
	}

	fmt.Println("")
}
