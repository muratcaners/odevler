#include<stdio.h>
#include<math.h>

int main()
{
	/*int sayi, i, j;
	printf("Sayi giriniz...:");  //sola yatýk üçgen
	scanf("%d", &sayi);
	printf("---------\n\n");

	for (i=0; i <=sayi; i++)
	{
	for (j = 0; j<=i; j++)
	{
	printf("*");
	}
	printf("\n");

	}*/

	/*char kr;
	printf("karakter giriniz(a,b)...:\n");
	kr = getchar();
	switch (kr)
	{
	case'a':
	printf("a ya bastiniz tebrikler\n");
	break;
	case'b':
	printf("b ye bastiniz\n");
	break;
	default:
	printf("a yada b harfine basmadiniz\n");
	return 13;
	}
	*/

	/*int secim;
	float x, y, sonuc;
	printf("iki sayi giriniz...:");
	scanf("%f %f", &x, &y);

	puts("****secenekleriniz****");  //hesap makinesi
	puts("[1] Toplama");
	puts("[2] Cikarma");
	puts("[3] Carpma");
	puts("[4] Bolme");

	printf("Seciminiz:");
	scanf("%d", &secim);

	switch (secim)
	{
	case 1:
	sonuc = x + y;
	printf("toplama isleminin sonucu: %4.2f dir", sonuc);
	break;
	case 2:
	sonuc = x - y;
	printf("cikarma isleminin sonucu: %4.2f dir", sonuc);
	break;
	case 3:
	sonuc = x * y;
	printf("carpma isleminin sonucu: %4.2f dir", sonuc);
	break;
	case 4:
	sonuc = x / y;
	printf("bolme isleminin sonucu: %4.2f dir", sonuc);
	break;

	default:
	printf("hatali giris yaptiniz");

	}*/

	/*long  i = 1, toplamdeger = 1;   // faktöriyel
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d", &sayi);


	while (i <= sayi)
	{
	toplamdeger = toplamdeger*i;
	i++;

	}
	printf("%d sayisinin faktoriyeli: %d dir", sayi, toplamdeger);*/

	//int i=0;           /*goto kalýbýyla 10 kere hello world*/
	//baslangýc_noktasi:
	//printf("hello world\n");
	//i++;
	//if (i <= 10)goto baslangýc_noktasi;


	//int sayi;
	//int yazilacak_rakam;

	//printf("Sayiyi giriniz> ");
	//scanf("%d", &sayi);

	//printf("Sayinin tersi: ");
	//while (sayi>10) {
	//	/*Sayýnýn son rakamý alýnýp
	//	ekrana bastýrýlýyor. */
	//	yazilacak_rakam = sayi % 10;
	//	printf("%d", yazilacak_rakam);
	///*	Son rakam ekrana bastýrýldýðý
	//	için sayýnýn son hanesi atýlýyor.*/
	//	sayi /= 10;
	//}
	//printf("%d\n", sayi);

	//	int girilen_sayi_adedi = 0;    /*sonsuz deger girilen sayilarin ortalamasý*/
	//	int sayi_toplami = 0;
	//	int girilen_sayi;
	//Sonsuz döngü oluþturuyoruz.
	//		for (;;)
	//		{
	//	printf("Lütfen bir sayý giriniz> ");
	//	scanf("%d", &girilen_sayi);
	//	if (girilen_sayi < 0) 
	//		break;
	//	sayi_toplami += girilen_sayi;
	//	girilen_sayi_adedi++;
	//		}
	//	printf("Toplam %d adet sayý girilmiþtir.\n", girilen_sayi_adedi);
	//	printf("Bunlarýn toplam deðeri %d olarak bulunmuþtur.\n", sayi_toplami);
	//	printf("Ortalamasý %.3f olarak hesaplanmýþtýr\n", (float)sayi_toplami / girilen_sayi_adedi);



	//int i = 0, j, sayi;
	//printf("sayi giriniz...:");  /*while döngüsüyle üçgen yapma*/
	//scanf("%d", &sayi);

	//while (i<=sayi)
	//{
	//j = 0;
	//while (j < i+1)
	//{
	//printf("*");
	//j++;
	//} printf("\n"); i++;
	//}













}
