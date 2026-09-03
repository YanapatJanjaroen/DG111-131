# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ:** เพราะภาษา C ใช้ Pass by Value ทำให้ค่าของ `hp` ถูกคัดลอกไปเก็บในตัวแปร `value` ของฟังก์ชัน `clamp()` ดังนั้นเมื่อแก้ `value` เป็น `100` จะเปลี่ยนเฉพาะตัวแปรสำเนาใน `clamp()` ไม่ได้เปลี่ยน `hp` ใน `main()`

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ:** เพราะ `result` เป็นตัวแปรแบบ Local Variable ที่ประกาศอยู่ภายในฟังก์ชัน `lerp()` จึงมี Scope เฉพาะภายในฟังก์ชัน `lerp()` เท่านั้น แม้ `main()` และ `lerp()` จะอยู่ในไฟล์เดียวกัน แต่ `main()` ก็ไม่สามารถเข้าถึง `result` ได้ เพราะอยู่นอก Scope ของมัน

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ:** เพราะ `randomRange()` รับค่า `diceMin` แบบ Pass by Value ทำให้ `min` เป็นสำเนาของ `diceMin` ดังนั้นเมื่อเปลี่ยน `min` เป็น `101` จะเปลี่ยนเฉพาะตัวแปร `min` ใน `randomRange()` เท่านั้น ไม่กระทบ `diceMin` ใน `main()` ซึ่งยังคงเป็น `1`

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ:** เพราะ `percentOf()` รับค่า `score` แบบ Pass by Value ทำให้ `current` เป็นสำเนาของ `score` ดังนั้นเมื่อแก้ `current` เป็น `0` จะเปลี่ยนเฉพาะตัวแปร `current` ใน `percentOf()` เท่านั้น ไม่กระทบ `score` ใน `main()` ซึ่งยังคงเป็น `35` ครับ
