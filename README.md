# WilsonOS

### The project is based on [Write your own Operating System](https://www.youtube.com/watch?v=1rnA6wpF0o4&t=20s)

### Prerequisite:
```python
# Please install the following packages
sudo apt-get install binutils

sudo apt-get install VirtualBox

sudo apt-get install grub-pc

sudo apt-get install xorriso 

libc6-dev-i386 (maybe)
```

### My Development Environment:

```python
Ubuntu 16.04.4 LTS
Visual Studio Code
VirtualBox
```

### First Build
```python
# Open VirtualBox and create a new OS.
name: WilsonOS
type: Other
version: Other/Unknown
# Load the iso file into the VirtualBox to create
# the new OS(default name should be "WilsonOS", 
# you can manually change the name in the makefile). 
```

### Run
```python
make run
```