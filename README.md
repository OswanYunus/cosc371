# Black Hole Simulation (OpenGL) – COSC 371

## 1. Description

This project implements a basic computer graphics simulation of a black hole environment using OpenGL. The simulation includes a central black hole, an accretion disk, multiple orbiting planets, and background stars. A visual approximation of gravitational lensing is also included.

---

## 2. System Requirements

* Windows Operating System
* MSYS2 environment
* C++ compiler (GCC)
* OpenGL libraries (FreeGLUT, GLEW)

---

## 3. Installation

### 3.1 Install MSYS2

Download and install MSYS2 from:
https://www.msys2.org/

---

### 3.2 Launch Environment

Open the **MSYS2 MinGW64** terminal.

---

### 3.3 Update Package Database

Run the following command:

```bash id="k3n9u1"
pacman -Syu
```

Restart the terminal if prompted.

---

### 3.4 Install Required Packages

```bash id="7wq2xp"
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-freeglut mingw-w64-x86_64-glew
```

---

## 4. Compilation and Execution

### 4.1 Navigate to Project Directory

```bash id="c9s0pl"
cd path/to/project
```

### 4.2 Compile Source Code

```bash id="y8m2hf"
g++ black.cpp -o blackhole -lfreeglut -lopengl32 -lglu32
```

### 4.3 Execute Program

```bash id="d1v7ra"
./blackhole
```

---
 5. Program Structure

* `black.cpp` – Main source file containing rendering and animation logic
* `README.md` – Documentation and execution instructions

---
 6. Implementation Details

* Rendering is performed using OpenGL primitives
* Animation is controlled using a timer callback (`glutTimerFunc`)
* Planetary motion is implemented using trigonometric functions
* Gravitational lensing is approximated by modifying vertex positions relative to distance from the origin


 7. Notes

* The program must be compiled before execution
* Ensure the MinGW64 environment is used
* Missing libraries will result in compilation errors



## 8. Disclaimer

This simulation is a visual approximation and does not represent a physically accurate model of a black hole.
