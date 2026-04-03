# 🔐 LSB Image Steganography using C

## 📌 Overview

This project implements an LSB (Least Significant Bit) based Image Steganography system using the C programming language. The application enables secure hiding of a secret text file within a BMP image and allows extraction of the hidden information without affecting the visible quality of the image.

The system works at a low level by manipulating individual bits of image pixel data, demonstrating how data can be concealed efficiently inside digital media.

---

## 🎯 Problem Statement

In today’s digital world, securely transmitting confidential information is a major challenge. Traditional encryption protects data but does not hide its existence. This project focuses on steganography, where the goal is to conceal the presence of information itself within an image.

---

## 💡 Proposed Solution

To address this, an LSB-based steganography technique is implemented where each bit of the secret data is embedded into the least significant bits of image pixels.

This ensures:

* Minimal visual distortion
* Secure data hiding
* Efficient encoding and decoding

---

## ⚙️ System Working

### 🔹 Encoding Process

1. Read the source BMP image
2. Extract and preserve BMP header
3. Read secret text file
4. Embed each bit of secret data into LSB of image pixels
5. Generate stego image (output.bmp)

---

### 🔹 Decoding Process

1. Read the stego image
2. Skip BMP header
3. Extract LSB bits from pixel data
4. Reconstruct original secret data
5. Store in decoded.txt

---

## ✨ Key Features

* Encode secret text into BMP image
* Decode hidden data from image
* Maintains original image quality
* Command-line interface
* Robust input validation
* Modular code design

---

## 🛠️ Technologies Used

* Programming Language: C
* File Handling: Binary file operations
* Concept: LSB Steganography
* Compiler: GCC
* Platform: Linux / Ubuntu

---

## 🧠 Core Concept (LSB Technique)

* Each pixel byte contains 8 bits
* Only the least significant bit is modified
* Changes are not visible to human eye

Example:

```
Original Byte: 10110110  
Modified Byte: 10110111  
```

---

## ▶️ Usage

### Encoding

```
./a.out -e source.bmp secret.txt output.bmp
```

### Decoding

```
./a.out -d output.bmp decoded.txt
```

---

## 📂 Project Structure

LSB_Steganography/
├── main.c          # Entry point
├── encode.c        # Encoding logic
├── decode.c        # Decoding logic
├── stego.h         # Header file
├── source.bmp      # Input image
├── output.bmp      # Encoded image
├── secret.txt      # Secret data
├── decoded.txt     # Extracted data
└── README.md       # Documentation

---

## 📊 Advantages

* Simple and efficient implementation
* High data hiding capacity
* No visible distortion
* Secure communication method

---

## ⚠️ Limitations

* Works only with BMP images
* Sensitive to image modifications
* Not suitable for compressed formats

---

## 🧠 Learning Outcomes

* Deep understanding of bitwise operations
* Hands-on experience with binary file handling
* Knowledge of image data structure (BMP)
* Implementation of real-world data hiding technique

---

## 📌 Conclusion

This project demonstrates how low-level programming concepts can be applied to build a secure data hiding system. LSB steganography provides an effective way to conceal information without altering the visual content, making it useful in cybersecurity and digital forensics.

---

## 🔗 GitHub Repository

https://github.com/PallaviLakumalla/Image-Steganography
