#!/usr/bin/python3
def safe_print_list(my_list: list, x: int) -> int:
    count = 0
    try:
        for i in range(x):
            print(my_list[i], end='')
            count += 1
    except IndexError:
        pass
    finally:
        print()
        return count
