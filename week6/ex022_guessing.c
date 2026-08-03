#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 1. ตั้งค่า Seed สำหรับสุ่มตัวเลข และสุ่มตัวเลขลับในช่วง 1-100
    srand(time(NULL));
    int target = rand() % 100 + 1;

    // guess และ attempts = 0 เพื่อนับจำนวนครั้งที่เดา
    int guess;
    int attempts = 0;

    printf("(っ◔◡◔)っ ♥ === Number Guessing Game (1-100) === ♥\n");

    //  do-while loop วนรับค่าจากผู้เล่น
    do
    {
        // รับค่า guess จากผู้เล่น
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // เพิ่มจำนวนครั้งที่เดา
        attempts++;

        // ใช้ if-else if-else เปรียบเทียบ
        if (guess > target)
        {
            printf("𝐓𝐨𝐨 𝐇𝐢𝐠𝐡!🐒🐒\n\n");
        }
        else if (guess < target)
        {
            printf("𝐓𝐨𝐨 𝐋𝐨𝐰!🙉🙉\n\n");
        }
        else
        {
            printf("Correct!🐵 You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != target); // วนซ้ำตราบใดที่ผู้เล่นยังทายไม่ถูก

    return 0;
}