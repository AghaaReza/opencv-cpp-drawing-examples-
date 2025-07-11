# OpenCV Drawing Demo (C++)

This project demonstrates how to draw basic geometric shapes and text using OpenCV in C++.

## 🧠 What It Does

The program creates a blank canvas and draws:
- A line
- A rectangle
- A filled circle
- An ellipse
- Text

All shapes are rendered using OpenCV's built-in drawing functions.

## 🛠️ Build & Run

### Prerequisites
- Linux (Debian-based recommended)
- C++ compiler (`g++`)
- OpenCV (install with `sudo apt install libopencv-dev`)

### Compile
```bash
g++ draw_shapes.cpp -o draw_shapes `pkg-config --cflags --libs opencv4`