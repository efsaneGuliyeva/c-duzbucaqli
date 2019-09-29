/*  29.09.2019
stdio.h standart I/O emeliyyatlari ucun lazim olan funksiyalarin kitabaxansidir
Biz bu funksiyalardan hele ki sadece ikisini oyrenmisik: printf ve scanf. stdio.h bundan basqa
funksiyalara da malikdir(hamisini oyreneceyik :) ).Amma bu funksiyalarin hamisinin ortaq
ceheti budur ki, ya istifadeciden input alirlar, ya da monitorda gorunmesi ucun nese
output emal edirler. 
*/
#include<stdio.h>

/*
main() c programinin olmazsa olmaz tek funksiyasidir. Bizim yazdigimiz kodlar compile olunub,
islemeye hazir olduqdan sonra run olunanda kompyuter ilk bu main funksiyasini ise salir, basqa sozle 
bu funkiyani cagirir. { } isaresi daxilinde yazdigimiz butun kodlar main funksiyasina aiddir. Funksiyalar
barede ayrica bir dersimiz olacaq, main funksiyasinin nece islediyi ile bagli "Aha moment" o ders olacaq :) Helelik
bilmelisiniz ki main funksiyasi yazdiginiz her programda sadece BIR DEFE yazilmalidir.
*/

void main()
{

	/* Deyiskenlerin ne oldugunu bilirsiz. int tam ededler ucun nezerde tutulub bunu da bilirsiniz. Duzbucaqlinin sahesini 
	ve perimetrini hesablamaq ucun 4 deyiskene ehtiyacim var. a,b -> istifadecinin terefleri daxil etmesi ucun. Sahe -> a*b 
	hasilinin qiymetini yadda saxlayacaq, perimetr -> 2(a+b) hesablanmasinin neticesini yadda saxlamaq ucun. Asagidaki iki yazilis
	da komputer ucun eynidir:
		1) int a,b,sahe,perimetr;
		
		2) int a;
		   int b;
		   int sahe;
		   int perimetr;
		   
		Eyni tipde olan deyiskenleri vergul isaresi ayirib yaza bilerik, bu bizim isimizi asanlasdirir. Meselen, c adli besinci bir deyisken de elave
		etmek istesem, perimetrden sonra vergul qoyub c yazmaq daha asandir neinki int c; deye yeni setr elave etmek.
	
	*/
	int a,b,sahe,perimetr;
	
	//Bu setr yazilmasi vacib setr deyil. Bu olmasa da programiniz isleyecek ve hesablamalari yerine yetirecek. Sadece bir az daha user friendly proqramimiz olsun deye :)
	//Yadda saxlayin ki, scanf ile istifadeciden informasiya qebul ederken ona hec bir mesaj gostere bilmezsiniz. Meselen asagidaki yazilis sehvdir:
	
	/*
		int yas;
		scanf("Yasinizi daxil edin: %d", &yas);
		
		Bu kod SEHV ISLEYECEK. Cunki scanf input qebul edir, output onun isi deyil, printf'in isidir.  Dogru versiya asagidadir
		
		int yas;
		printf("Yasinizi daxil edin: ");
		scanf("%d", &yas); 
	*/
	printf("Duzbucaqlinin enini ve uzunlugunu daxil edin: ");
	
	/* scanf proqram isleyerken sizden iki tam eded daxil etmeyinizi gozleyir. Birinci ededi daxil et->spacebar click et->ikinci ededi daxil et->enter.
	 
		scanf("%d%d", &a, &b); olsa idi, yeni %d'ler arasinda space olmasa idi: Birinci ededi daxil et->enter->ikinci ededi daxil et->enter.  So, bosluq isaresi ededlerin 
		alt-alta yox yanasi gorunmesini
		temin edir.  ilk eded a deyiskenie, ikincisi b-ye elave olunur. Deyisken adlari onunde & olmasind diqqet edin. & isaresi olmadan yazsaniz daxil etdiyimiz edeler deyiskenlere
		elave olunmur.
	
	*/
	scanf("%d%d", &a, &b);
	
	// sahe deyiskenine a*b deyerini menimsedirik. Istifadeci cmd penceresinden a ve b-ye hansi edeleri daxil edibse onlar bir-birine vurulub hasili sahe deyiskeni daxiline yazilir.
	/*
		yuxarida int sahe teyin olunub, bu o demekdir ki tam eded daxil etmek ucun sahe deyiskeni var amma hele nese yazilmayib ora. Burda hemin sahe deyiskeni daxiline tam eded daxil
		edirik. o sebebden sahenin onune bir daha int elave etmirik
	*/
	sahe = a * b;
	//perimetri de eyni qayda ile hesablayiriq.
	perimetr = 2*(a+b);
	//ve deyerleri ekranda gosteririk.
	printf("Sahe: %d, Perimetr: %d", sahe, perimetr);	
}
