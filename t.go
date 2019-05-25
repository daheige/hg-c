package main

import "fmt"

func main(){
	for i := 0;i<1e6;i++{
		fmt.Printf("current index: %d\n",i)
	}
}
/*
time go run t.go
real	0m6.460s
user	0m1.489s
sys	0m2.702s
*/

