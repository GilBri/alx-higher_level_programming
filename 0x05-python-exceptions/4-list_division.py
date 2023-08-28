#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    result = []

    for i in range(list_length):
        try:
            division_result = my_list_1[i] / my_list_2[i]
        except (ZeroDivisionError, TypeError, IndexError):
            division_result = 0
            if isinstance(my_list_1[i], str) or isinstance(my_list_2[i], str):
                print("division by 0 or wrong type")
            else:
                print("out of range")
        finally:
            result.append(division_result)

    return result
