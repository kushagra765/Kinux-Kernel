# Kinux Kernel
[![CircleCI](https://circleci.com/gh/kushagra765/Kinux-Kernel.svg?style=svg)](https://circleci.com/gh/kushagra765/Kinux-Kernel)
[![CodeFactor](https://www.codefactor.io/repository/github/kushagra765/kinux-kernel/badge)](https://www.codefactor.io/repository/github/kushagra765/kinux-kernel)
![Code Coverage](https://img.shields.io/badge/coverage-100%25-brightgreen?style=flat-square)
[![License](https://img.shields.io/badge/license-Apache%202.0-blue?style=flat-square)](https://www.github.com/kushagra765/Kinux-Kernel/blob/main/LICENSE)
<br/>

Kinux Kernel is a kernel for x86_64 based systems. It supports many features such as GDT, IDT, ISR, Keyboard Driver and more.

***WARNING: DO NOT USE THE KERNEL CODE IN THIS BRANCH!***

You can read [```docs/CREATE_YOUR_OWN_OS.md```](https://github.com/kushagra765/Kinux-Kernel/blob/main/docs/CREATE_YOUR_OWN_OS.md) to create your own os based on this kernel.

# Compiling
To compile the kernel, follow these _steps_:

Linux:
1. Install [GCC](https://gnu.org/software/gcc/) on your system.
2. Download Kinux Kernel from [here](https://github.com/kushagra765/Kinux-Kernel/archive/main.zip) and extract it.
3. Open your terminal and ```cd``` into the kernel source directory.
4. Now, ```cd``` into the folder you want to compile.
5. Type ```gcc -Wall -c [file name]```.

***If you see any code issues or errors in compiling, just create an issue with the file name and the error.***

# Development
- [ ] Create Boot Files
- [ ] Create Filesystem (echfs)
- [ ] IPC
- [ ] System Calls
- [ ] libc
- [x] Create Keyboard Driver
- [x] Create IRQ
- [x] Create Port Driver
- [x] Create GDT
- [x] Create IDT
- [x] Create ISR
- [x] Create VGA Driver
- [x] Create Include files

# Contributions
If you want to contribute to this kernel, you can read the [```CONTRIBUTING```](https://github.com/kushagra765/Kinux-Kernel/blob/main/CONTRIBUTING.md) file in this repository.

# License
The kernel is licensed under _Apache License 2.0_. See the [```LICENSE```](https://github.com/kushagra765/Kinux-Kernel/blob/main/LICENSE) file for more info.
