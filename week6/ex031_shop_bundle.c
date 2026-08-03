#include <stdio.h>
#include <stdbool.h>

int main()
{
    int gold = 1000;
    int selection;
    int total = 0;
    bool boughtSword = 0, boughtArmor = 0;

    printf("=== 𝕀𝕋𝔼𝕄 𝕊ℍ𝕆ℙ ===\n");
    printf("Gold: %d\n\n", gold);

    printf("1. ℌ𝔢𝔞𝔩𝔱𝔥 𝔓𝔬𝔱𝔦𝔬𝔫🧪  -  50 ɢᴏʟᴅ  (+50 ʜᴘ)\n");
    printf("2. 𝔐𝔞𝔫𝔞 𝔓𝔬𝔱𝔦𝔬𝔫 🪄   -  80 ɢᴏʟᴅ  (+30 ᴍᴘ)\n");
    printf("3. ℑ𝔯𝔬𝔫 𝔖𝔴𝔬𝔯𝔡🗡️    - 500 ɢᴏʟᴅ  (+20 ᴀᴛᴋ)\n");
    printf("4. 𝔏𝔢𝔞𝔱𝔥𝔢𝔯 𝔄𝔯𝔪𝔬𝔯🛡️  - 300 ɢᴏʟᴅ  (+15 ᴅᴇғ)\n");
    printf("5. ℭ𝔥𝔢𝔠𝔨𝔬𝔲𝔱 🛒\n\n");

    do
    {
        printf("𝓢𝓮𝓵𝓮𝓬𝓽 𝓲𝓽𝓮𝓶:👀 ");
        scanf("%d", &selection);

        switch (selection)
        {
        case 1:
            if (total + 50 > gold)
            {
                printf("𝓝𝓸𝓽 𝓮𝓷𝓸𝓾𝓰𝓱 𝓖𝓸𝓵𝓭!🫵🏻👁️👄👁️🤚🏻\n\n");
            }
            else
            {
                total += 50;
                printf("𝒜𝒹𝒹𝑒𝒹 𝐻𝑒𝒶𝓁𝓉𝒽 𝒫𝑜𝓉𝒾𝑜𝓃 𝓉𝑜 𝒸𝒶𝓇𝓉.\n\n");
            }
            break;

        case 2:
            if (total + 80 > gold)
            {
                printf("𝓝𝓸𝓽 𝓮𝓷𝓸𝓾𝓰𝓱 𝓖𝓸𝓵𝓭!🫵🏻👁️👄👁️🤚🏻\n\n");
            }
            else
            {
                total += 80;
                printf("𝒜𝒹𝒹𝑒𝒹 𝑀𝒶𝓃𝒶 𝒫𝑜𝓉𝒾𝑜𝓃 𝓉𝑜 𝒸𝒶𝓇𝓉.\n\n");
            }
            break;

        case 3:
            if (total + 500 > gold)
            {
                printf("𝓝𝓸𝓽 𝓮𝓷𝓸𝓾𝓰𝓱 𝓖𝓸𝓵𝓭!🫵🏻👁️👄👁️🤚🏻\n\n");
            }
            else
            {
                total += 500;
                boughtSword = 1;
                printf("𝒜𝒹𝒹𝑒𝒹 𝐼𝓇𝑜𝓃 𝒮𝓌𝑜𝓇𝒹 𝓉𝑜 𝒸𝒶𝓇𝓉.\n\n");
            }
            break;

        case 4:
            if (total + 300 > gold)
            {
                printf("𝓝𝓸𝓽 𝓮𝓷𝓸𝓾𝓰𝓱 𝓖𝓸𝓵𝓭!🫵🏻👁️👄👁️🤚🏻\n\n");
            }
            else
            {
                total += 300;
                boughtArmor = 1;
                printf("𝒜𝒹𝒹𝑒𝒹 𝐿𝑒𝒶𝓉𝒽𝑒𝓇 𝒜𝓇𝓂𝑜𝓇 𝓉𝑜 𝒸𝒶𝓇𝓉.\n\n");
            }
            break;

        case 5:
            // ออกจาก loop เมื่อเลือก Checkout
            break;

        default:
            printf("𝐼𝓃𝓋𝒶𝓁𝒾𝒹 𝒸𝒽𝑜𝒾𝒸𝑒!\n\n");
            break;
        }
    } while (selection != 5);

    printf("\n=== ℂ𝕙𝕖𝕔𝕜𝕠𝕦𝕥 ===\n");
    if (boughtSword && boughtArmor)
    {
        total = total * 90 / 100; // ลด 10%
        printf("𝒲𝒶𝓇𝓇𝒾𝑜𝓇 𝐵𝓊𝓃𝒹𝓁𝑒! (-10%%)\n");
    }

    gold -= total;

    printf("𝓣𝓸𝓽𝓪𝓵 𝓟𝓪𝓲𝓭: %d Gold\n", total);
    printf("𝑅𝑒𝓂𝒶𝒾𝓃𝒾𝓃𝑔 : %d Gold\n", gold);

    return 0;
}