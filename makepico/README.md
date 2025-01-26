# Make an empty Raspberry Pi Pico project

Original code by:

https://github.com/smittytone/pi-pico/tree/main/makepico

https://blog.smittytone.net/2021/02/02/program-raspberry-pi-pico-c-mac/


Run this zsh script to create a new Pico project.

```
makepico ~/my_pico_projects/killer_iot_device
```

It will create the folder, add stub source files (.h and .c) and configure a CMakeLists.txt.

## Usage

`makepico [path/name] [-c] [-d] [-n your name] [-h]`

### Options

```
-c / --c       Set up the project for C.
-d / --nodebug Set up the project without SWD debug.
-n / --name    Your name for the comments. Default: <YOU>
-v / --version The project\'s inital version. Default: 1.0.0
-h / --help    This help screen
```