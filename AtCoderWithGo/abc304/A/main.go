package main

import (
	"fmt"
)

type human struct {
	name string
	age  int
}

func main() {
	var n int
	fmt.Scan(&n)
	var humans []human
	var human human

	for i := 0; i < n; i++ {
		var name string
		var age int
		fmt.Scan(&name)
		fmt.Scan(&age)

		human.name = name
		human.age = age

		humans = append(humans, human)
	}
	// fmt.Println(humans)

	minAge := 1000000000
	minAgePosition := 0

	for i, _ := range humans {
		if minAge > humans[i].age {
			minAge = humans[i].age
			minAgePosition = i
		}
	}

	for i := minAgePosition; i < n; i++ {
		fmt.Println(humans[i].name)
	}

	for i := 0; i < minAgePosition; i++ {
		fmt.Println(humans[i].name)
	}

}
