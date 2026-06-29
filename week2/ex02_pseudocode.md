

```mermaid
flowchart TD
Start([Start]) --> Input[/รับคะแนน score/]
Input --> D1{score >= 80?}
D1 -->|Yes| A[เกรด = A]
D1 -->|No| D2{score >= 70?}
D2 -->|Yes| B[เกรด = B]
D2 -->|No| D3{score >= 60?}
D3 -->|Yes| C[เกรด = C]
D3 -->|No| D4{score >= 50?}
D4 -->|Yes| D[เกรด = D]
D4 -->|No| F[เกรด = F]
A & B & C & D & F --> Output[/แสดงเกรด/]
Output --> End([End])
```

BEGIN [โจทย์ A — ตรวจสอบเกรด]
INPUT score
IF score >= 80 THEN grade = "A"
ELSE IF score >= 70 THEN grade = "B"
ELSE IF score >= 60 THEN grade = "C"
ELSE IF score >= 50 THEN grade = "D"
ELSE grade = "F"
END IF
OUTPUT grade


```mermaid
flowchart TD 
Start([Start]) --> Input[/รับaและb/] 
Input --> D1{a>b?} 
D1 -->|Yes| A[เกรด a] 
D1 -->|No| B[เกรด b] 
A  & B-->End([End])
```

BEGIN [โจทย์ B — หาค่าสูงสุดจาก 2 ตัวเลข]
INPUT A,B
IF A>B?
ELSE IF GRADE A SHOW A
ELSE IF GRADE B SHOW B

END IF

WHILE A >B DO

print A

END WHILE

OUTPUT grade


```mermaid
flowchart TD
Start([Start]) --> Input[/รับN/]
Input -->A[I = i]
A --> A1{i<=N?}
A1 -->|Yes| I[/พิมพ์ i/]
I -->I2[i=i+1]
I2 -->A1
A1 -->|No|End([End])
```

BEGIN [โจทย์ C — นับจาก 1 ถึง N]

INPUT n

i=1

FOR i FROM 1 TO i <=N DO

    print 1

    i=i+1

END FOR

WHILE i <=N DO

    print i

    i=i+1

END WHILE

END
