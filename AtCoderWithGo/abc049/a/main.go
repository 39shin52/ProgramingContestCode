package main

import "fmt"

func main() {
	var c string
	fmt.Scan(&c)

	if c == "a" || c == "i" || c == "u" || c == "e" || c == "o" {
		fmt.Println("vowel")
	} else {
		fmt.Println("consonant")
	}
}
