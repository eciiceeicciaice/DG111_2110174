
โจทย์ A — ระบบ Combat


```mermaid
flowchart TD
Start([Start]) --> Input[/รับ player_attack, enemy_defense,
enemy_hp/]
Input --> Calc["damage = max(player_attack - enemy_defense,
1)"]
Calc --> Reduce["enemy_hp = enemy_hp - damage"]
Reduce --> D1{enemy_hp <= 0?}
D1 -->|Yes| Win[/แสดง Victory!/]
D1 -->|No| Show[/แสดง enemy_hp ที่เหลือ/]
Win & Show --> End([End])
```

โจทย์ B — ระบบ Level Up

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ current_xp,xp_needed,
level/]
Input -->D1{current_x>=xp_needed?}
D1 -->|Yes| D2[level = level+1]
D2 --> D3["xp_needed = xp_needed x 1.5 "]
D3 --> D4["current_xp = 0"]
D4 --> L1[/แสดงlevel และ current_xp /]
L1 --> End([End])
D1 -->|No| End([End])
```

โจทย์ C (ท้าทาย) — Simple AI Patrol


```mermaid
flowchart TD
Start([Start]) --> Input[pos-A dir-forward]
Input --> G{ระยะถึง player <100?}
G -->|Yes| A1[/chase player/]
A1 --> End([End])
G -->|NO| B1[/เลื่อนenemy ตามdir/]
B1--> B2{ถึงจุดB?}
B2-->|Yes| B3[dir=กลับไปที่A]
B3--> G[ระยะถึง player <100?]
C-->|No|G{ระยะถึง player <100?}
B2-->|No|C{ถึงจุดA?}
C-->|yes|C1[dir=ไปหน้าB]
C1-->G{ระยะถึง player <100?}
```
