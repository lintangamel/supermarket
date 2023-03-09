#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>


int main(){
    awal:
    system ("Color F9");
    int menu,i,tlahir,bulanL,tahunL, simpanIndex, member =0;
    char nama[20], namad[20], namab[20];
    char jkelamin[5], umur[70];
    char password[25], passtemp[25], listPassword[20][20], listUsername[20][20];
    bool cekSymbol, cekBesar, cekKecil, cekAngka, cekUser;

    fflush (stdin);
    printf("\n\n\t----------------------------");
    printf("\n\t|     SELAMAT DATANG       |");
    menu :
    printf("\n\t----------------------------");
    printf("\n\t|SILAKAN PILIH MENU DIBAWAH|");
    printf("\n\t----------------------------");
    printf("\n\t| 1.REGISTRASI             |");
    printf ("\n\t| 2.LOGIN                  |");
    printf ("\n\t| 3.EXIT                   |");
    printf("\n\t----------------------------");
    printf ("\n\t PILIH MENU : ");
    scanf("%d", &menu);
    do {
    system("cls");
    switch(menu)
    {
        case 1 :
        printf("\n\t|SILAKAN REGISTRASI UNTUK MEMBUAT AKUN|\n");
        printf("\tNAMA DEPAN\t\t: ");
        scanf(" %[^\n]", namad);
        printf("\tNAMA BELAKANG\t\t: ");
        scanf(" %[^\n]", namab);
        printf("\tTANGGAL LAHIR\t\t: ");
        scanf(" %[^\n]", &tlahir);
        printf("\tBULAN LAHIR\t\t: ");
        scanf(" %[^\n]", &bulanL);
        printf("\tTAHUN LAHIR\t\t: ");
        scanf(" %[^\n]", &tahunL);
        printf("\tUMUR ANDA\t\t: ");
        scanf(" %[^\n]", umur);
        printf("\tJENIS KELAMIN(L/P)\t: ");
        scanf(" %[^\n]", jkelamin);

        system ("cls");
        printf("\t\t\t\t\t|===================================|\n");
        printf("\t\t\t\t\t| SELAMAT DATA ANDA BERHASIL DI BUAT|\n");
        printf("\t\t\t\t\t|===================================|\n");
        printf("\t\t\t\t\t|Buat Username\t : ");
        scanf(" %[^\n]", nama);
        while(8>7)
        {
            printf("\t\t\t\t\t|Buat Password\t : ");
            scanf(" %[^\n]", password);
            if(strlen(password)>8){
                cekAngka = false;
                cekBesar = false;
                cekKecil = false;
                cekSymbol = false;

                for(i = 0; i < strlen(password); i++){
                    if(password[i] >=48 && password[i] <=57){
                        cekAngka = true;
                    }else if(password[i] >= 65 && password[i] <= 90){
                        cekBesar = true;
                    }else if(password[i] >= 97 && password[i] <= 122){
                        cekKecil = true;
                    }else{
                        cekSymbol = true;
                    }
            }
            if(cekAngka == true && cekBesar == true && cekKecil == true && cekSymbol == true){

            }else
            {
                printf("\t\t\t\t\t|Password Harus Mengandung Angka Besar & Kecil, Huruf, dan Symbol\n");
                continue;
            }
            strcpy(passtemp, password);
            if(password == strrev(passtemp)){
              printf("\t\t\t\t\t\t|PASSWORD ANDA PALINDROME");
              continue;
            }
            break;
        }else
        {
            printf("\t\t\t\t\t|Password Anda Kurang Dari 8 Digit!\n");
            continue;
        }
    }
    strcpy(listUsername[member], nama);
    strcpy(listPassword[member], password);

    printf("\n\t\t\t\t\t** AKUN ANDA BERHASIL DIBUAT **\n");
    getch();
    system ("cls");
    goto menu;
    break;

    case 2:
    while(0<1)
    {

        printf("\n\t*SILAKAN LOGIN*\n");
        printf("\tUsername         : ");
        scanf (" %[^\n]", nama);
        for(i = 0; listUsername[i][i] != '\0'; i++){

            if(strcmp(listUsername[i], nama) == 0){
                simpanIndex = i;
                cekUser = true;
            }
        }
        if(cekUser == false){
            printf("\tUsername Tidak Ada\n");
            continue;
        }

        passwordd :
        printf("\tMasukan Password : ");
         char ch;
         int i=0;
         while((ch= (char)_getch ())!='\r')
         {password[i] = ch;
            printf("*");
            i++;
         }

        for(i = 0; listPassword[i][i] != '\0'; i++)
        {
        if((strcmp(listPassword[i], password) == 0))
        {
            system ("cls");
            printf ("\n\n\n\n\n\n\n\n\n\n");
            printf ("\t\t\t\tL O A D I N G");
            for (i=0; i<15; i++){ //untuk memberikan bar loading sebnayak 30x bar
                    printf ("%c", 249); //untuk membuat bar loading
                    Sleep(100); //untuk men-delay selama 100ms/0,1 detik setiap 1 loading bar
        }
          namabarang ();
        }

        else
            printf("\n\tPassword Anda Salah!\n");
            printf ("\tSilakan Ulangi\n");
            goto passwordd;
        }
        }


    case 3:
    Sleep(400);
    printf("\n\t--------------------------------------------");
    printf("\n\t: SAMPAI JUMPA, SEMOGA HARIMU MENYENANGKAN :");
    printf("\n\t--------------------------------------------");
    printf("\n\t: NAMA ANGGOTA KELOMPOK :                  :");
    printf("\n\t:Meilani Dwi Risanti (672022150)           :");
    printf("\n\t:Whigi Tantriya Putri (672022081)          :");
    printf("\n\t:Lintang Amelya Restu Widaryanto(672022139):");
    printf("\n\t:Ananda Dwi Erviana (672022233)            :");
    printf("\n\t:Mario Halkin Asyer Nadapdap (672022297)   :");
    printf("\n\t--------------------------------------------");
    getch();
    printf ("\n\tPress any key to continue . . .");
    getch();
    system ("cls");

    for (i=1; i<=300; i++){
        printf(" I LOVE YOU \3 ");
        Sleep(10);
    }
    getch();
    system ("cls");
}
} while (menu < 3);
    goto awal;
}

struct barang{
    int input, Garam_Dolpin, Kaldu_Jamur_Totole, Coca_Cola, Nescafe, Mama_Lemon, Rinso, Molto, Vaseline, Ponds, Wipol, Sikat_Gigi_Formula,
    Pantene, Nuvo, Teh_Kotak, Cimory, Indomilk, Yakult, Sprite, Aqua, Teh_pucuk, Lasegar, Piatos, Nabati, Taro, Pilusgaruda, Chocolatos,
    KecapBango, SaoriSaosTiram, KopiKapalApi, Krisbee, Sponge, chikiBall, cheetosh, SaosSambal, BumbuRacik, Gulaku, Sunco, Bimoli, Desaku, Antaka,
    Rojolele, Segitigabiru, Gorengsedap, Kuahsedap, Citato, Celup_poci, Ladaku, Telur, Royco, PastaGigi;
};

struct total
{
   float jumlahGaram_Dolpin, jumlahKaldu_Jamur_Totole, jumlahSaoriSaosTiram, jumlahBumbuRacik, jumlahDesaku, jumlahRojolele, jumlahSunco,
    jumlahSegitigabiru, jumlahKuahsedap, jumlahKopiKapalApi, jumlahCitato, jumlahPilusgaruda, jumlahTaro, jumlahNabati, jumlahSponge,
    jumlahAqua, jumlahSprite, jumlahTeh_pucuk, jumlahLasegar, jumlahYakult, jumlahPastaGigi, jumlahNuvo, jumlahWipol,
    jumlahRinso, jumlahVaseline, jumlahRoyco, jumlahKecapBango, jumlahSaosSambal, jumlahLadaku, jumlahAntaka, jumlahGulaku, jumlahBimoli,
    jumlahGorengsedap, jumlahCelup_poci, jumlahTelur, jumlahcheetosh, jumlahChocolatos, jumlahPiatos, jumlahKrisbee, jumlahchikiBall, jumlahIndomilk,
    jumlahCoca_Cola, jumlahNescafe, jumlahTeh_Kotak, jumlahCimory, jumlahPantene, jumlahSikat_Gigi_Formula, jumlahMama_Lemon, jumlahMolto, jumlahPonds;
    float bayar, totalharga, kembalian;
};
    struct total total1;
    struct barang barang1;
    struct barang jumlah;


void namabarang ()
{

    system ("Color F9");
    system ("cls");
    printf("|^=============================================================^|\n");
    printf ("|           SELAMAT DATANG DI TOKO ORA PAYU RAPOPO              |\n");
    printf("|^=============================================================^|\n");
    printf("| 1. Garam Dolpin\t\t|");
    printf(" 26. Royco\t\t\t|\n");
    printf("| 2. Kaldu Jamur Totole\t\t|");
    printf(" 27. Kecap Bango\t\t|\n");
    printf("| 3. Saori Saos Tiram\t\t|");
    printf(" 28. Indofood Saos Sambal\t|\n");
    printf("| 4. Bumbu Racik Indofood\t|");
    printf(" 29. Ladaku\t\t\t|\n");
    printf("| 5. Kunyit Bubuk Desaku\t|");
    printf(" 30. Bumbu Balado Antaka\t|\n");
    printf("| 6. Beras Rojolele\t\t|");
    printf(" 31. Gulaku\t\t\t|\n");
    printf("| 7. Minyak Goreng Sunco\t|");
    printf(" 32. Minyak Goreng Bimoli\t|\n");
    printf("| 8. Tepung Segitiga Biru\t|");
    printf(" 33. Mie Instan Goreng Sedaap\t|\n");
    printf("| 9. Mie Instan Kuah Sedaap\t|");
    printf(" 34. Teh Celup Poci\t\t|\n");
    printf("| 10. Kopi Kapal Api\t\t|");
    printf(" 35. Telur\t\t\t|\n");
    printf("| 11. Citato\t\t\t|");
    printf(" 36. Cheetosh\t\t\t|\n");
    printf("| 12. Pilus Garuda\t\t|");
    printf(" 37. Chocolatos\t\t|\n");
    printf("| 13. Taro\t\t\t|");
    printf(" 38. Piatos\t\t\t|\n");
    printf("| 14. Nabati\t\t\t|");
    printf(" 39. Krisbee\t\t\t|\n");
    printf("| 15. Sponge\t\t\t|");
    printf(" 40. Chiki Ball\t\t|\n");
    printf("| 16. Aqua\t\t\t|");
    printf(" 41. Indomilk\t\t\t|\n");
    printf("| 17. Sprite\t\t\t|");
    printf(" 42. Coca Cola\t\t\t|\n");
    printf("| 18. Teh Pucuk\t\t\t|");
    printf(" 43. Nescafe\t\t\t|\n");
    printf("| 19. Lasegar\t\t\t|");
    printf(" 44. Teh Kotak\t\t\t|\n");
    printf("| 20. Yakult\t\t\t|");
    printf(" 45. Cimory\t\t\t|\n");
    printf("| 21. Pasta Gigi Pepsoden\t|");
    printf(" 46. Pantene\t\t\t|\n");
    printf("| 22. Nuvo\t\t\t|");
    printf(" 47. Sikat Gigi Formula\t|\n");
    printf("| 23. Wipol\t\t\t|");
    printf(" 48. Mama Lemon\t\t|\n");
    printf("| 24. Rinso\t\t\t|");
    printf(" 49. Molto\t\t\t|\n");
    printf("| 25. Vaseline\t\t\t|");
    printf (" 50. Pond's\t\t\t|\n");
    printf("|===============================================================|\n");
    printf ("\n\n 51. Muat Ulang Pesanan");
    printf ("\n\n 99. Cetak Pesanan");
    printf ("\n\n 52. Exit");


    fflush (stdin);
    for (barang1.input != 0; barang1.input !=99;)
    {
    do {
    printf ("\n\nMasukkan Nomer Barang =  "); scanf ("%d", &barang1.input);
    fflush (stdin);
    switch (barang1.input)
    {
        case 1 : printf ("Garam Dolpin\n");
                printf ("Harga = Rp. 11.600,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Garam_Dolpin);
                total1.jumlahGaram_Dolpin = jumlah.Garam_Dolpin*11600;

        break;
        case 2 : printf ("Kaldu Jamur Totole\n");
                printf ("Harga = Rp. 8.490,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Kaldu_Jamur_Totole);
                total1.jumlahKaldu_Jamur_Totole = jumlah.Kaldu_Jamur_Totole*8490;

        break;
        case 3 : printf ("Saori Saos Tiram\n");
                printf ("Harga = Rp. 13.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.SaoriSaosTiram);
                total1.jumlahSaoriSaosTiram = jumlah.SaoriSaosTiram*13000;
        break;
        case 4 : printf ("Bumbu Racik Indofood\n");
                printf ("Harga = Rp. 2.500,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.BumbuRacik);
                total1.jumlahBumbuRacik = jumlah.BumbuRacik*2500;
        break;
        case 5 : printf ("Kunyit Bubuk Desaku\n");
                printf ("Harga = Rp. 18.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Desaku);
                total1.jumlahDesaku = jumlah.Desaku*18000;
        break;
        case 6 : printf ("Beras Rojolele\n");
                printf ("Harga = Rp. 36.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Rojolele);
                total1.jumlahRojolele = jumlah.Rojolele*36000;
        break;
        case 7 : printf ("Minyak Goreng Sunco\n");
                printf ("Harga = Rp. 34.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Sunco);
                total1.jumlahSunco = jumlah.Sunco*34000;
        break;
        case 8 : printf ("Tepung Segitiga Biru\n");
                printf ("Harga = Rp. 10.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Segitigabiru);
                total1.jumlahSegitigabiru = jumlah.Segitigabiru*10000;
        break;
        case 9 : printf ("Mie Instan Kuah Sedaap\n");
                printf ("Harga = Rp. 2.500,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Kuahsedap);
                total1.jumlahKuahsedap = jumlah.Kuahsedap*2500;
        break;
        case 10 : printf ("Kopi Kapal Api\n");
                printf ("Harga = Rp. 6.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.KopiKapalApi);
                total1.jumlahKopiKapalApi = jumlah.KopiKapalApi*6000;
        break;
        case 11 : printf ("Citato \n");
                printf ("Harga = Rp. 7.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Citato);
                total1.jumlahCitato = jumlah.Citato*7000;
        break;
        case 12 : printf ("Pilus Garuda\n");
                printf ("Harga = Rp. 6.500,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Pilusgaruda);
                total1.jumlahPilusgaruda = jumlah.Pilusgaruda*6500;
        break;
        case 13 : printf ("Taro\n");
                printf ("Harga = Rp. 8.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Taro);
                total1.jumlahTaro = jumlah.Taro*8000;
        break;
        case 14 : printf ("Nabati\n");
                printf ("Harga = Rp. 5.300,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Nabati);
                total1.jumlahNabati = jumlah.Nabati*5300;
        break;
        case 15 : printf ("Sponge\n");
                printf ("Harga = Rp. 12.500,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Sponge);
                total1.jumlahSponge = jumlah.Sponge*12500;
        break;
        case 16 : printf ("Aqua\n");
                printf ("Harga = Rp. 3.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Aqua);
                total1.jumlahAqua = jumlah.Aqua*3000;
        break;
        case 17 : printf ("Sprite\n");
                printf ("Harga = Rp. 10.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Sprite);
                total1.jumlahSprite = jumlah.Sprite*10000;
        break;
        case 18 : printf ("Teh Pucuk\n");
                printf ("Harga = Rp. 3.800,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Teh_pucuk);
                total1.jumlahTeh_pucuk = jumlah.Teh_pucuk*3800;
        break;
        case 19 : printf ("Lasegar\n");
                printf ("Harga = Rp. 6.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Lasegar);
                total1.jumlahLasegar = jumlah.Lasegar*6000;
        break;
        case 20 : printf ("Yakult\n");
                printf ("Harga = Rp. 9.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Yakult);
                total1.jumlahYakult = jumlah.Yakult*9000;
        break;
        case 21 : printf ("Pasta Gigi Pepsodent\n");
                printf ("Harga = Rp. 15.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.PastaGigi);
                total1.jumlahPastaGigi = jumlah.PastaGigi*15000;
        break;
        case 22 : printf ("Nuvo\n");
                printf ("Harga = Rp. 3.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Nuvo);
                total1.jumlahNuvo = jumlah.Nuvo*3000;
        break;
        case 23 : printf ("Wipol\n");
                printf ("Harga = Rp. 11.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Wipol);
                total1.jumlahWipol = jumlah.Wipol*11000;
        break;
        case 24 : printf ("Rinso\n");
                printf ("Harga = Rp. 23.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Rinso);
                total1.jumlahRinso = jumlah.Rinso*23000;
        break;
        case 25 : printf ("Vaseline\n");
                printf ("Harga = Rp. 25.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Vaseline);
                total1.jumlahVaseline = jumlah.Vaseline*25000;
        break;
        case 26 : printf ("Royco\n");
                printf ("Harga = Rp. 8.490,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Royco);
                total1.jumlahRoyco = jumlah.Royco*8490;
        break;
        case 27 : printf ("Kecap Bango\n");
                printf ("Harga = Rp. 18.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.KecapBango);
                total1.jumlahKecapBango = jumlah.KecapBango*18000;
        break;
        case 28 : printf ("Indofood Saos Sambal\n");
                printf ("Harga = Rp. 14.900,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.SaosSambal);
                total1.jumlahSaosSambal = jumlah.SaosSambal*14900;
        break;
        case 29 : printf ("Ladaku\n");
                printf ("Harga = Rp. 28.990,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Ladaku);
                total1.jumlahLadaku = jumlah.Ladaku*28990;
        break;
        case 30 : printf ("Bumbu Balado Antaka\n");
                printf ("Harga = Rp. 5.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Antaka);
                total1.jumlahAntaka = jumlah.Antaka*5000;
        break;
        case 31 : printf ("Gulaku\n");
                printf ("Harga = Rp. 15.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Gulaku);
                total1.jumlahGulaku = jumlah.Gulaku*15000;
        break;
        case 32 : printf ("Minyak Goreng Bimoli\n");
                printf ("Harga = Rp. 18.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Bimoli);
                total1.jumlahBimoli = jumlah.Bimoli*18000;
        break;
        case 33 : printf ("Mie Instan Goreng Sedaap \n");
                printf ("Harga = Rp. 3.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Gorengsedap);
                total1.jumlahGorengsedap = jumlah.Gorengsedap*3000;
        break;
        case 34 : printf ("Teh Celup Poci\n");
                printf ("Harga = Rp. 8.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Celup_poci);
                total1.jumlahCelup_poci = jumlah.Celup_poci*8000;
        break;
        case 35 : printf ("Telur\n");
                printf ("Harga = Rp. 30.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Telur);
                total1.jumlahTelur = jumlah.Telur*30000;
        break;
        case 36 : printf ("Cheetosh\n");
                printf ("Harga = Rp. 5.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.cheetosh);
                total1.jumlahcheetosh = jumlah.cheetosh*5000;
        break;
        case 37 : printf ("Chocolatos\n");
                printf ("Harga = Rp. 10.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Chocolatos);
                total1.jumlahChocolatos = jumlah.Chocolatos*10000;
        break;
        case 38 : printf ("Piatos\n");
                printf ("Harga = Rp. 8.150,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Piatos);
                total1.jumlahPiatos = jumlah.Piatos*8150;
        break;
        case 39 : printf ("Krisbee\n");
                printf ("Harga = Rp. 4.200,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Krisbee);
                total1.jumlahKrisbee = jumlah.Krisbee*4200;
        break;
        case 40 : printf ("Chiki Ball\n");
                printf ("Harga = Rp. 7.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.chikiBall);
                 total1.jumlahchikiBall = jumlah.chikiBall*7000;
        break;
        case 41 : printf ("Indomilk\n");
                printf ("Harga = Rp. 5.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Indomilk);
                 total1.jumlahIndomilk = jumlah.Indomilk*5000;
        break;
        case 42 : printf ("Coca Cola\n");
                printf ("Harga = Rp. 10.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Coca_Cola);
                 total1.jumlahCoca_Cola = jumlah.Coca_Cola*10000;
        break;
        case 43 : printf ("Nescafe\n");
                printf ("Harga = Rp. 8.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Nescafe);
                 total1.jumlahNescafe = jumlah.Nescafe*8000;
        break;
        case 44 : printf ("Teh Kotak\n");
                printf ("Harga = Rp. 3.500,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Teh_Kotak);
                 total1.jumlahTeh_Kotak = jumlah.Teh_Kotak*3500;
        break;
        case 45 : printf ("Cimory\n");
                printf ("Harga = Rp. 6.950,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Cimory);
                 total1.jumlahCimory = jumlah.Cimory*6950;
        break;
        case 46 : printf ("Pantene\n");
                printf ("Harga = Rp. 20.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Pantene);
                 total1.jumlahPantene = jumlah.Pantene*20000;
        break;
        case 47 : printf ("Sikat Gigi Formula\n");
                printf ("Harga = Rp. 15.600,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Sikat_Gigi_Formula);
                 total1.jumlahSikat_Gigi_Formula = jumlah.Sikat_Gigi_Formula*15600;
        break;
        case 48 : printf ("Mama Lemon\n");
                printf ("Harga = Rp. 9.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Mama_Lemon);
                 total1.jumlahMama_Lemon = jumlah.Mama_Lemon*9000;
        break;
        case 49 : printf ("Molto\n");
                printf ("Harga = Rp. 14.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Molto);
                 total1.jumlahMolto = jumlah.Molto*14000;
        break;
        case 50 : printf ("Pond's\n");
                printf ("Harga = Rp. 23.000,00\n\n");
                printf ("Masukkan Jumlah Barang = ");
                scanf ("%d", &jumlah.Ponds);
                 total1.jumlahPonds = jumlah.Ponds*23000;
        break;

        case 52 :
        system ("cls");
        printf("\n\t--------------------------------------------");
        printf("\n\t: SAMPAI JUMPA, SEMOGA HARIMU MENYENANGKAN :");
        printf("\n\t--------------------------------------------");
        printf("\n\t: NAMA ANGGOTA KELOMPOK :                  :");
        printf("\n\t:Meilani Dwi Risanti (672022150)           :");
        printf("\n\t:Whigi Tantriya Putri (672022081)          :");
        printf("\n\t:Lintang Amelya Restu Widaryanto(672022139):");
        printf("\n\t:Ananda Dwi Erviana (672022233)            :");
        printf("\n\t:Mario Halkin Asyer Nadapdap (672022297)   :");
        printf("\n\t--------------------------------------------");
        exit (0);
        break;

        case 51 : namabarang (); break;
        case 99 : perhitungan(); exit(0);break;
    }
    }
    while (barang1.input < 50);
    printf ("Barang nomor %d tidak tersedia", barang1.input);
    printf ("\nSilakan Input Ulang");
    }
}

void perhitungan ()
{

    system ("Color F9");
    system("cls");

    printf("\tJumlah  |\t Jenis Barang            |\tHarga   \n");
    printf("---------------------------------------------------------------\n");
    printf("|\t   %d   :\t Garam Dolpin            : Rp. %.2f \n", jumlah.Garam_Dolpin, total1.jumlahGaram_Dolpin);
    printf("|\t   %d   :\t Kaldu Jamur Totole      : Rp. %.2f \n", jumlah.Kaldu_Jamur_Totole, total1.jumlahKaldu_Jamur_Totole);
    printf("|\t   %d   :\t Saori Saos Tiram        : Rp. %.2f \n", jumlah.SaoriSaosTiram, total1.jumlahSaoriSaosTiram);
    printf("|\t   %d   :\t Bumbu Racik Indofood    : Rp. %.2f \n", jumlah.BumbuRacik, total1.jumlahBumbuRacik);
    printf("|\t   %d   :\t Kunyit Bubuk Desaku     : Rp. %.2f \n", jumlah.Desaku, total1.jumlahDesaku);
    printf("|\t   %d   :\t Beras Rojolele          : Rp. %.2f \n", jumlah.Rojolele, total1.jumlahRojolele);
    printf("|\t   %d   :\t Minyak Goreng Sunco     : Rp. %.2f \n", jumlah.Sunco, total1.jumlahSunco);
    printf("|\t   %d   :\t Tepung Segitiga Biru    : Rp. %.2f \n", jumlah.Segitigabiru, total1.jumlahSegitigabiru);
    printf("|\t   %d   :\t Mie Instan Kuah Sedaap  : Rp. %.2f \n", jumlah.Kuahsedap, total1.jumlahKuahsedap);
    printf("|\t   %d   :\t Kopi Kapalapi           : Rp. %.2f \n", jumlah.KopiKapalApi, total1.jumlahKopiKapalApi);

    printf("===============================================================\n");
    printf("|\t   %d   :\t Citato                  : Rp. %.2f \n", jumlah.Citato, total1.jumlahCitato);
    printf("|\t   %d   :\t Pilus Garuda            : Rp. %.2f \n", jumlah.Pilusgaruda, total1.jumlahPilusgaruda);
    printf("|\t   %d   :\t Taro                    : Rp. %.2f \n", jumlah.Taro, total1.jumlahTaro);
    printf("|\t   %d   :\t Nabati                  : Rp. %.2f \n", jumlah.Nabati, total1.jumlahNabati);
    printf("|\t   %d   :\t Sponge                  : Rp. %.2f \n", jumlah.Sponge, total1.jumlahSponge);
    printf("|\t   %d   :\t Aqua                    : Rp. %.2f \n", jumlah.Aqua, total1.jumlahAqua);
    printf("|\t   %d   :\t Sprite                  : Rp. %.2f \n", jumlah.Sprite, total1.jumlahSprite);
    printf("|\t   %d   :\t Teh Pucuk               : Rp. %.2f \n", jumlah.Teh_pucuk, total1.jumlahTeh_pucuk);
    printf("|\t   %d   :\t Lasegar                 : Rp. %.2f \n", jumlah.Lasegar, total1.jumlahLasegar);
    printf("|\t   %d   :\t Yakult                  : Rp. %.2f \n", jumlah.Yakult, total1.jumlahYakult);

    printf("===============================================================\n");
    printf("|\t   %d   :\t Pasta Gigi Pepsodent    : Rp. %.2f \n", jumlah.PastaGigi, total1.jumlahPastaGigi);
    printf("|\t   %d   :\t Nuvo                    : Rp. %.2f \n", jumlah.Nuvo, total1.jumlahNuvo);
    printf("|\t   %d   :\t Wipol                   : Rp. %.2f \n", jumlah.Wipol, total1.jumlahWipol);
    printf("|\t   %d   :\t Rinso                   : Rp. %.2f \n", jumlah.Rinso, total1.jumlahRinso);
    printf("|\t   %d   :\t Vaseline                : Rp. %.2f \n", jumlah.Vaseline, total1.jumlahVaseline);
    printf("|\t   %d   :\t Royco                   : Rp. %.2f \n", jumlah.Royco, total1.jumlahRoyco);
    printf("|\t   %d   :\t Kecap Bango             : Rp. %.2f \n", jumlah.KecapBango, total1.jumlahSunco);
    printf("|\t   %d   :\t Indofood Saos Sambal    : Rp. %.2f \n", jumlah.SaosSambal, total1.jumlahSaosSambal);
    printf("|\t   %d   :\t Ladaku                  : Rp. %.2f \n", jumlah.Ladaku, total1.jumlahLadaku);
    printf("|\t   %d   :\t Bumbu Balado Antaka     : Rp. %.2f \n", jumlah.Antaka, total1.jumlahAntaka);

    printf("===============================================================\n");
    printf("|\t   %d   :\t Gulaku                  : Rp. %.2f \n", jumlah.Gulaku, total1.jumlahGulaku);
    printf("|\t   %d   :\t Minyak Goreng Bimoli    : Rp. %.2f \n", jumlah.Bimoli, total1.jumlahBimoli);
    printf("|\t   %d   :\t Mie Instan Goreng Sedaap: Rp. %.2f \n", jumlah.Gorengsedap, total1.jumlahGorengsedap);
    printf("|\t   %d   :\t Teh Celup Poci          : Rp. %.2f \n", jumlah.Celup_poci, total1.jumlahCelup_poci);
    printf("|\t   %d   :\t Telur                   : Rp. %.2f \n", jumlah.Telur, total1.jumlahTelur);
    printf("|\t   %d   :\t Cheetos                 : Rp. %.2f \n", jumlah.cheetosh, total1.jumlahcheetosh);
    printf("|\t   %d   :\t Chocolatos              : Rp. %.2f \n", jumlah.Chocolatos, total1.jumlahChocolatos);
    printf("|\t   %d   :\t Piatos                  : Rp. %.2f \n", jumlah.Piatos, total1.jumlahPiatos);
    printf("|\t   %d   :\t Krisbee                 : Rp. %.2f \n", jumlah.Krisbee, total1.jumlahKrisbee);
    printf("|\t   %d   :\t Chiki Ball              : Rp. %.2f \n", jumlah.chikiBall, total1.jumlahchikiBall);

    printf("===============================================================\n");
    printf("|\t   %d   :\t Indomilk                : Rp. %.2f \n", jumlah.Indomilk, total1.jumlahIndomilk);
    printf("|\t   %d   :\t Coca Cola               : Rp. %.2f \n", jumlah.Coca_Cola, total1.jumlahCoca_Cola);
    printf("|\t   %d   :\t Nescafe                 : Rp. %.2f \n", jumlah.Nescafe, total1.jumlahNescafe);
    printf("|\t   %d   :\t Teh Kotak               : Rp. %.2f \n", jumlah.Teh_Kotak, total1.jumlahTeh_Kotak);
    printf("|\t   %d   :\t Cimory                  : Rp. %.2f \n", jumlah.Cimory, total1.jumlahCimory);
    printf("|\t   %d   :\t Pantene                 : Rp. %.2f \n", jumlah.Pantene, total1.jumlahPantene);
    printf("|\t   %d   :\t Sikat Gigi Formula      : Rp. %.2f \n", jumlah.Sikat_Gigi_Formula, total1.jumlahSikat_Gigi_Formula);
    printf("|\t   %d   :\t Mama Lemon              : Rp. %.2f \n", jumlah.Mama_Lemon, total1.jumlahMama_Lemon);
    printf("|\t   %d   :\t Molto                   : Rp. %.2f \n", jumlah.Molto, total1.jumlahMolto);
    printf("|\t   %d   :\t Pond's                  : Rp. %.2f \n", jumlah.Ponds, total1.jumlahPonds);

    total1.totalharga = total1.jumlahGaram_Dolpin + total1.jumlahKaldu_Jamur_Totole + total1.jumlahSaoriSaosTiram +
                        total1.jumlahBumbuRacik + total1.jumlahDesaku + total1.jumlahRojolele + total1.jumlahSunco +
                        total1.jumlahSegitigabiru + total1.jumlahKuahsedap + total1.jumlahKopiKapalApi + total1.jumlahCitato +
                        total1.jumlahPilusgaruda + total1.jumlahTaro + total1.jumlahNabati + total1.jumlahSponge + total1.jumlahAqua +
                        total1.jumlahSprite + total1.jumlahTeh_pucuk + total1.jumlahLasegar + total1.jumlahYakult + total1.jumlahPastaGigi +
                        total1.jumlahNuvo + total1.jumlahWipol + total1.jumlahRinso + total1.jumlahVaseline + total1.jumlahRoyco +
                        total1.jumlahKecapBango + total1.jumlahSaosSambal  + total1.jumlahLadaku + total1.jumlahAntaka + total1.jumlahGulaku +
                        total1.jumlahBimoli + total1.jumlahGorengsedap + total1.jumlahCelup_poci + total1.jumlahTelur + total1.jumlahcheetosh +
                        total1.jumlahChocolatos + total1.jumlahPiatos + total1.jumlahKrisbee + total1.jumlahchikiBall + total1.jumlahIndomilk +
                        total1.jumlahCoca_Cola + total1.jumlahNescafe + total1.jumlahTeh_Kotak + total1.jumlahCimory + total1.jumlahPantene +
                        total1.jumlahSikat_Gigi_Formula + total1.jumlahMama_Lemon + total1.jumlahMolto + total1.jumlahPonds;

    printf("===============================================================\n");
    printf("\nTotal Harga = %.2f \n", total1.totalharga);
    ulang:
    printf("===============================================================\n");
    printf("Masukkan Uang Anda : Rp. ");
    scanf("%f", &total1.bayar);
    fflush (stdin);
    if (total1.bayar < total1.totalharga)
    {
        printf ("\nMaaf Pembayaran Anda Kurang\n");
        goto ulang;
    }
    else if (total1.bayar >= total1.totalharga)
    {
        total1.kembalian=total1.bayar-total1.totalharga;
        printf("Kembalian anda : Rp. %.2f",total1.kembalian);

    }
    else
    {
        printf ("Input tidak tersedia\n");
        goto ulang;
    }
        printf("\n\n\nTekan apa saja untuk melihat struk pembayaran\n");
        system("Pause");
        system("cls");
        printf ("\n\n\n\n\n\n\n\n\n\n");
            printf ("\t\t\t\tL O A D I N G");
            for (int i=0; i<15; i++){ //untuk memberikan bar loading sebnayak 30x bar
                    printf ("%c", 249); //untuk membuat bar loading
                    Sleep(100); //untuk men-delay selama 100ms/0,1 detik setiap 1 loading bar
        }
        struk();

}

void struk ()
{
    system ("Color F9");
    time_t waktu;
    time (&waktu);

    system ("cls");
    printf("=========================================================================================\n");
    printf("|                                                                                       |\n");
    printf("| \t\t\t\tTOKO ORA PAYU RAPOPO                   \t\t\t|\n");
    printf("| \t\t\tJALAN KALIJERO, KOTA SALATIGA, 50734\t\t\t\t|\n");
    printf("| \t\t\t\tJAWA TENGAH, INDONESIA\t\t\t\t\t|\n");
    printf("| \t\t\t      %s \t\t\n|", ctime (&waktu));
    printf("\n|_______________________________________________________________________________________|\n");
    printf("|\tNama Barang\t| \tHarga Satuan \t|\tJumlah    |\t Total\t\t|\n");
    printf("|=======================|=======================|=================|=====================|\n");


        if (total1.jumlahGaram_Dolpin > 0)
        {
         printf("|\tGaram Dolpin\t|\tRp. 11.600.00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Garam_Dolpin,
         total1.jumlahGaram_Dolpin);
        }
        if (total1.jumlahKaldu_Jamur_Totole > 0)
        {
         printf("|  Kaldu Jamur Totole\t|\tRp. 8.490.00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Kaldu_Jamur_Totole,
         total1.jumlahKaldu_Jamur_Totole);
        }
        if (total1.jumlahSaoriSaosTiram > 0)
        {
         printf("|   Saori Saos Tiram\t|\tRp. 13.000.00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.SaoriSaosTiram,
         total1.jumlahSaoriSaosTiram);
        }
        if (total1.jumlahBumbuRacik > 0)
        {
         printf("|\tBumbu Racik\t|\tRp. 2.500,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.BumbuRacik,
         total1.jumlahBumbuRacik);
        }
         if (total1.jumlahDesaku > 0)
        {
         printf("|\tDesaku\t\t|\tRp. 18.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Desaku,
         total1.jumlahDesaku);
        }
        if (total1.jumlahRojolele > 0)
        {
         printf("|     Beras Rojolele\t|\tRp. 36.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Rojolele,
         total1.jumlahRojolele);
        }
        if (total1.jumlahSunco > 0)
        {
         printf("|  Minyak Goreng Sunco\t|\tRp. 34.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Sunco,
         total1.jumlahSunco);
        }
        if (total1.jumlahSegitigabiru > 0)
        {
         printf("| Tepung Segitiga Biru\t|\tRp. 10.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Segitigabiru,
         total1.jumlahSegitigabiru);
        }
        if (total1.jumlahKuahsedap > 0)
        {
         printf("| Mie Instan Kuah Sedap\t|\tRp. 2.500,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Kuahsedap,
         total1.jumlahKuahsedap);
        }
        if (total1.jumlahKopiKapalApi > 0)
        {
         printf("|      Kopi Kapal Api\t|\tRp. 6.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.KopiKapalApi,
         total1.jumlahKopiKapalApi);
        }
        if (total1.jumlahCitato > 0)
        {
         printf("|\tCitato\t\t|\tRp. 7.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Citato,
         total1.jumlahCitato);
        }
        if (total1.jumlahPilusgaruda > 0)
        {
         printf("|\tPilus Garuda\t|\tRp. 6.500,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Pilusgaruda,
         total1.jumlahPilusgaruda);
        }
        if (total1.jumlahTaro > 0)
        {
         printf("|\t Taro\t\t|\tRp. 8.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Taro,
         total1.jumlahTaro);
        }
        if (total1.jumlahNabati > 0)
        {
         printf("|\tNabati\t\t|\tRp. 5.300,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Nabati,
         total1.jumlahNabati);
        }
        if (total1.jumlahSponge > 0)
        {
         printf("|\t Sponge\t\t|\tRp. 12.500,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Sponge,
         total1.jumlahSponge);
        }
        if (total1.jumlahAqua > 0)
        {
         printf("|\t  Aqua\t\t|\tRp. 3.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Aqua,
         total1.jumlahAqua);
        }
        if (total1.jumlahSprite > 0)
        {
         printf("|\t Sprite\t\t|\tRp. 10.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Sprite,
         total1.jumlahSprite);
        }
        if (total1.jumlahTeh_pucuk > 0)
        {
         printf("|\tTeh Pucuk\t|\tRp. 3.800,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Teh_pucuk,
         total1.jumlahTeh_pucuk);
        }
        if (total1.jumlahLasegar > 0)
        {
         printf("|\tLasegart\t|\tRp. 6.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Lasegar,
         total1.jumlahLasegar);
        }
        if (total1.jumlahYakult > 0)
        {
         printf("|\tYakult\t\t|\tRp. 9.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Yakult,
         total1.jumlahYakult);
        }
        if (total1.jumlahPastaGigi > 0)
        {
         printf("|  Pasta Gigi Pepsodent\t|\tRp. 15.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.PastaGigi,
         total1.jumlahPastaGigi);
        }
        if (total1.jumlahNuvo > 0)
        {
         printf("|\t  Nuvo\t\t|\tRp. 3.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Nuvo,
         total1.jumlahNuvo);
        }
        if (total1.jumlahWipol > 0)
        {
         printf("|\t Wipol\t\t|\tRp. 11.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Wipol,
         total1.jumlahWipol);
        }
        if (total1.jumlahRinso > 0)
        {
         printf("|\t  Rinso\t\t|\tRp. 23.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Rinso,
         total1.jumlahRinso);
        }
        if (total1.jumlahVaseline > 0)
        {
         printf("|\tVaseline\t|\tRp. 25.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Vaseline,
         total1.jumlahVaseline);
        }
        if (total1.jumlahKecapBango > 0)
        {
         printf("|\tKecap Bango\t|\tRp. 18.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.KecapBango,
         total1.jumlahKecapBango);
        }
        if (total1.jumlahSaosSambal > 0)
        {
         printf("|Saos Sambal Indofood\t|\tRp. 14.900,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.SaosSambal,
         total1.jumlahSaosSambal);
        }
        if (total1.jumlahLadaku > 0)
        {
         printf("|\t Ladaku\t\t|\tRp. 23.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Ladaku,
         total1.jumlahLadaku);
        }
        if (total1.jumlahAntaka > 0)
        {
         printf("|  Bumbu Balado Antaka\t|\tRp. 5.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Antaka,
         total1.jumlahAntaka);
        }
        if (total1.jumlahGulaku > 0)
        {
         printf("|\t  Gulaku\t|\tRp. 15.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Gulaku,
         total1.jumlahGulaku);
        }
        if (total1.jumlahBimoli > 0)
        {
         printf("|\t Bimoli\t\t|\tRp. 18.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Bimoli,
         total1.jumlahBimoli);
        }
        if (total1.jumlahGorengsedap > 0)
        {
         printf("|Mie Instan Goreng Sedap|\tRp. 3.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Gorengsedap,
         total1.jumlahGorengsedap);
        }
        if (total1.jumlahCelup_poci > 0)
        {
         printf("|    Teh Celup Poci\t|\tRp. 8.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Celup_poci,
         total1.jumlahCelup_poci);
        }
        if (total1.jumlahTelur > 0)
        {
         printf("|\tTelut\t\t|\tRp. 30.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Telur,
         total1.jumlahTelur);
        }
        if (total1.jumlahcheetosh > 0)
        {
         printf("|\tCheetosh\t|\tRp. 5.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.cheetosh,
         total1.jumlahcheetosh);
        }
        if (total1.jumlahChocolatos > 0)
        {
         printf("|\tChocolatos\t|\tRp. 10.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Chocolatos,
         total1.jumlahChocolatos);
        }
        if (total1.jumlahPiatos > 0)
        {
         printf("|\tPiatos\t\t|\tRp. 8.150,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Piatos,
         total1.jumlahPiatos);
        }
        if (total1.jumlahKrisbee > 0)
        {
         printf("|\tKrisbee\t\t|\tRp. 4.200,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Krisbee,
         total1.jumlahKrisbee);
        }
        if (total1.jumlahchikiBall > 0)
        {
         printf("|\tChiki Ball\t|\tRp. 7.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.chikiBall,
         total1.jumlahchikiBall);
        }
        if (total1.jumlahIndomilk > 0)
        {
         printf("|\tIndomilk\t|\tRp. 5.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Indomilk,
         total1.jumlahIndomilk);
        }
        if (total1.jumlahCoca_Cola > 0)
        {
         printf("|\tCoca Cola\t|\tRp. 10.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Coca_Cola,
         total1.jumlahCoca_Cola);
        }
        if (total1.jumlahNescafe > 0)
        {
         printf("|\tNescafe\t\t|\tRp. 8.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Nescafe,
         total1.jumlahNescafe);
        }
        if (total1.jumlahTeh_Kotak> 0)
        {
         printf("|\tTeh Kotak\t|\tRp. 3.500,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Teh_Kotak,
         total1.jumlahTeh_Kotak);
        }
        if (total1.jumlahCimory > 0)
        {
         printf("|\tCimory\t\t|\tRp. 6.950,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Cimory,
         total1.jumlahCimory);
        }
        if (total1.jumlahPantene > 0)
        {
         printf("|\tPantene\t\t|\tRp. 20.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Pantene,
         total1.jumlahPantene);
        }
        if (total1.jumlahSikat_Gigi_Formula > 0)
        {
         printf("|  Sikat Gigi Formula\t|\tRp. 15.600,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Sikat_Gigi_Formula,
         total1.jumlahSikat_Gigi_Formula);
        }
        if (total1.jumlahMama_Lemon > 0)
        {
         printf("|\tMama Lemon\t|\tRp. 9.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Mama_Lemon,
         total1.jumlahMama_Lemon);
        }
        if (total1.jumlahMolto > 0)
        {
         printf("|\tMolto\t\t|\tRp. 14.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Molto,
         total1.jumlahMolto);
        }
        if (total1.jumlahPonds > 0)
        {
         printf("|\tPond's\t\t|\tRp. 23.000,00 \t|\t  %d\t  |\tRp. %.2f\t|\n",jumlah.Ponds,
         total1.jumlahPonds);
        }
        printf("========================================================================================|\n");
        printf("\n|_______________________________________________________________________________________|");
        printf("\n|                                                                                       |");
        printf("\n| Total Keseluruhan = Rp. %.2f\t\t\t\t\t\t\t|", total1.totalharga);
        printf("\n| Uang bayar        = Rp. %.2f\t\t\t\t\t\t\t|", total1.bayar);
        printf("\n| Kembalian         = Rp. %.2f\t\t\t\t\t\t\t|", total1.kembalian);
        printf("\n|                                                                                       |");
        printf("\n|                                                                                       |");
        printf("\n|=======================================================================================|");
        printf("\n|                                                                                       |");
        printf("\n| \t\t\tTERIMA KASIH TELAH BERTRANSAKSI!\t\t\t\t|");
        printf("\n| \t\tPerhatian : Barang yang dibeli tidak bisa dikembalikan!\t\t\t|");
        printf("\n|                                                                                       |\n");
        printf("-----------------------------------------------------------------------------------------\n");

}

