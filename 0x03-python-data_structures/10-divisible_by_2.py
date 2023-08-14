#!/usr/bin/python3
def divisible_by_2(my_list=[]):
	if my_list is None or len(my_list) == 0:
		return None
		
	multiples_of_2 = my_list[0]
	for num in my_list:
		multiples_of_2.append(num % 2 == 0)
		return multiples_of_2