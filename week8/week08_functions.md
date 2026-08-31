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

**คำตอบ:** หลักการของPass by Value ที่นับค่าจากclampผ่านค่าint Maxที่เรากำหนดไว้100

ค่าของHPจึงแสดงค่าตามค่า int Max ที่เรากำหนดไว้

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ:** เพราะresultเป็นตัวแปรของฟังก์ชั่นlerpไม่สามารถแสดงให้เห็นจากภายนอกได้ เราจึงไม่เห็นค่าของ `result` แต่การทำงานของ `result`ยังคงแสดงจากภายใน

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ:เพราะPass by Valueที่นับค่าที่เราต้องการแสดงโดยเฉพาะค่าที่เรากำหนดไว้ ในขณะที่ค่าของ `min` ภายในยังคงถูกบวกค่าไปเรื่อยๆ diceMin ยังเป็น 1 เหมือนเดิม ไม่เปลี่ยนตาม min ที่แก้ในฟังก์ชัน

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ:**score ยังเป็น 35 เหมือนเดิมไม่เปลี่ยนตาม current ที่แก้ในฟังก์ชันเพราะPass by Value กำหนดcurrent = 35 ค่า `main` ยังคงไม่เปลี่ยนเป็นค่า0
