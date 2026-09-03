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

**คำตอบ: เพราะ ถูก clamp กัน hp ให้ไม่สามารถน้อยกว่า 0 และมากกว่า 100 ทำให้แม้จะตั้งให้ hp เท่า 150 แต่ Value แสดงค่าที่ใกล้ 150 ที่สุดคือ 100 ค่าสูงสุดที่ตั้งไว้**

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: เพราะ result ถูกประกาศไว้ข้างใน function lerp ทำให้ result ไม่อยู่ใน main() แต่อยู่ใน lerp ที่อยู่ใน main() อีกที**

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: เพราะ แสดงค่าจาก min แม้เปลี่ยนค่า dicemin ก็ไม่เป็นผลให้ค่าที่แสดงเปลี่ยนแปลง**

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: เพราะ score แสดงค่าจาก function percentOf แม้จะเปลี่ยน current เป็นเท่าใดก็ไม่มีผลกับ score ที่อยู่ใน percentOf ไม่ใช่ main()**
