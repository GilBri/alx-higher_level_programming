#!/usr/bin/python3
def divisible_by_2(my_list=[]):
	multiples_of_2 = [0]
	for num in my_list:
		multiples_of_2.append(num % 2 == 0)
		return multiples_of_2