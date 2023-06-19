import math
def sphere_volume(sphereRadius):
    print(
        "Sphere Volume:",
        4/3 * math.pi * (math.sqrt(sphereRadius) * sphereRadius)
    )

def hemisphere_volume(hemisphereRadius):
    print(
        "Hemisphere Volume:",
        2/3 * math.pi * (math.sqrt(hemisphereRadius) * hemisphereRadius)
    )

sphere_volume(1)
hemisphere_volume(1)