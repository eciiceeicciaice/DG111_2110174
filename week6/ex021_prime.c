#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1; // สมมติว่าเป็นจำนวนเฉพาะไว้ก่อน
    int divisor = 0; // ตัวแปรเก็บค่าตัวหารที่พบ

    // 1. รับค่าจำนวนเต็มบวก n จากผู้ใช้
    printf("Enter positive integer: ");
    scanf("%d", &n);

    // หาก n <= 1 ให้แจ้งทันทีว่าไม่ใช่จำนวนเฉพาะ
    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // for loop
        for (int i = 2; i < n; i++)
        {
            // เช็คว่า n % i == 0 หรือไม่
            if (n % i == 0)
            {
                isPrime = 0; // เปลี่ยนสถานะเป็นไม่ใช่จำนวนเฉพาะ
                divisor = i; // บันทึกตัวหารที่พบ
                break;       // ออกจากลูปทันที
            }
        }
    }

    // ตรวจสอบค่า isPrime
    if (isPrime == 1)
    {
        printf("%d is a Prime Number\n", n);
    }
    else
    {
        printf("%d is NOT a Prime Number (divisible by %d)\n", n, divisor);
    }

    return 0;
}