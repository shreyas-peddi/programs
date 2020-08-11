# cook your dish here

test_case = int(input())

while test_case != 0:

    no_cars = int(input())
    car_speed = list(map(str, input().split()))

    if no_cars == 1:
        print(1)
    else:
        slowest_car_speed = car_speed[0]
        cars_with_max_speed = 1
        for i in range(1, len(car_speed)):
            if slowest_car_speed >= car_speed[i]:
                cars_with_max_speed += 1

            if car_speed[i] < slowest_car_speed:
                slowest_car_speed = car_speed[i]
                
        print(cars_with_max_speed)
    test_case -= 1

