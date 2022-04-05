# cub3D

My first RayCaster with miniLibX

This project is inspired by the world-famous 90's game [Wolfenstein](http://users.atw.hu/wolf3d/), which was the first FPS ever.
The goal is to take a 2d map and convert it into a 3d game in which you can walk around.
The graphics were made using Minilibx library, and the renderization was made using a [ray-casting](https://lodev.org/cgtutor/raycasting.html) technique which uses the [DDA](https://en.wikipedia.org/wiki/Digital_differential_analyzer_(graphics_algorithm)) algorithm.

## Usage
(This software is only available for Linux and macOS atm)

#### To compile on linux/mac
* You should install first `MinilibX` on your machine
* In includes/cub3d.h toggle IS_OS_MAC accordingly

#### Build Instructions

```bash
$ git clone https://github.com/coderMeira/cub3D/
$ cd cub3D
$ make
$ ./cub3D <map_path/file.cub>
```

## Example using one of my childhood's beloved map's (CS 1.6 de_dust2) textures and colors.
run "./cub3D maps/de_dust2.cub" on the terminal after the previous instructions
![de_dust_cub3d](https://user-images.githubusercontent.com/75038840/161865328-6a941ea1-cbd0-4d46-be0b-f283f72bcbe7.png)
