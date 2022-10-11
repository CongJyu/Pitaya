# encoding utf-8
# E04Q02

import time


def timeit(func):
    

@timeit
def func(num):
    return sum(range(num))


func(1000000)
