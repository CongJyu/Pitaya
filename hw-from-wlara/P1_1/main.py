#  计算球的表面积和体积
radius = float(input("半径="))
radius_out = round(radius, 2)
Pi = 3.1415
area = 4 * Pi * radius_out ** 2
area_out = round(area, 2)
volume = (4 / 3) * Pi * radius_out ** 3
volume_out = round(volume, 2)
print(
    "球半径=", radius_out,
    "表面积=", area_out,
    "体积", volume_out
)
