# LSB Steganography (C Language)

## 📌 Project Description
This project implements **LSB (Least Significant Bit) Steganography** using the **C programming language**.  
It allows hiding a **secret text file** inside a **BMP image** and later extracting the hidden data without noticeably changing the image.

The project demonstrates how data can be securely concealed within image files using low-level bit manipulation techniques.

---

## ✨ Features
- Encode secret data into a BMP image using LSB technique
- Decode and retrieve hidden data from the image
- Supports text file hiding
- Preserves the visual quality of the image
- Command-line based interface
- Input validation and error handling

---

## 🛠️ Technologies Used
- Programming Language: **C**
- File Handling: **Binary Files**
- Concept: **LSB Steganography**
- Compiler: **GCC**
- Platform: **Linux / Ubuntu**

---

## ⚙️ How It Works
- Each byte of secret data is hidden in the **least significant bits** of image pixel data
- The BMP header remains unchanged
- During decoding, the LSBs are extracted to reconstruct the original secret file

---

## ▶️ Usage

### Encoding (Hide data inside image)
```bash
./a.out -e source.bmp secret.txt output.bmp
```
### Decoding (Extract hidden data)
```bash
./a.out -d output.bmp decoded.txt
```
## 📂 Project Structure
```
LSB_Steganography/
├── main.c          # Entry point of the program
├── encode.c        # Encoding logic
├── decode.c        # Decoding logic
├── stego.h         # Header file
├── source.bmp      # Original image
├── output.bmp      # Image with hidden data
├── secret.txt      # File to be hidden
├── decoded.txt     # Extracted secret file
└── README.md       # Project documentation
```
