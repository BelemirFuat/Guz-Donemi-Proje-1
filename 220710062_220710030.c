#include <stdio.h>
// Algoritma ve Programlamaya Giriş dersi Proje Ödevi.
// 13.11.2022
int main()
{
	int	   abonetipi;
	float  ilksayac, sonsayac, abonetipkontrol=0;
	float  yeniabonekontrol=1, yeniabonegiriskontrol=0;
	char yeniabonesor;
	float  tip1sayi=0,tip2sayi=0,tip3sayi=0,tip4sayi=0, toplamabone=0;
	float tip1ortsutuk,tip2ortsutuk,tip3ortsutuk,tip4ortsutuk;
	float  kademe1altkonut=0, kademe1ustisyer=0;
	float maxsutukkonutgunortsu=0,maxsutuk=0,maxsutukucret=0;
	float tip1topsutuk=0,tip2topsutuk=0,tip3topsutuk=0,tip4topsutuk=0;
	float tip1yuzde,tip2yuzde,tip3yuzde,tip4yuzde;
	float abonetoplamucret, abonekdv, atiksuucret,sukullanimucret,abonetoplamfatura;
	float tip1topsure=0,tip2topsure=0,tip3topsure=0,tip4topsure=0;
	float sure,kullanim,maxsutuktip, maxaylikatiksu;
	float maxsutukucretmaxsutuk,maxsutukucretmaxsutuktip;
	float toplamkdv=0, topatiksuucreti=0,tip1topsutukucret=0,tip2topsutukucret=0,tip3topsutukucret=0,tip4topsutukucret=0;
	float topsutukucret, maxayliksutukucreti=0,maxsutukucrettip,maxayliksutuk=0,maxaylikatiksuucreti=0;
	float maxaylikatiksutip,maxaylikatiksukullanim;
	
	printf("ESKI istatistik birimi.\n");
	printf("**********************\n\n");
	
	//tekrar abpne alabilmek için döngü ile başladım.
	while(yeniabonekontrol==1)
	{
		//birden fazla yanlış girilmesi ihtimaline karşı burada döngü kullandım.
		while(abonetipkontrol==0)
		{
			printf("Abone Tipini Giriniz: \n");
			printf("1-Konut\n2-Isyeri\n3-Kamu Kurumu\n4-Turistik Tesis\n");
			printf("Seciminiz?: ");
			scanf("%d",&abonetipi);
			
			
			if((abonetipi<1)||(abonetipi>4))
				{printf("\nAbone tipini hatali olarak secim yaptiniz.\n\n");}
			else
				{abonetipkontrol=1;}
		}
		
			//sayacın ilk değerinin alımı.
			printf("\nIlk sayac degerini giriniz: ");
			scanf("%f",&ilksayac);
			
		while(ilksayac<0)
		{
			printf("\nIlk sayaci hatali girdiniz.\n");
			printf("\nIlk sayac degerini tekrar giriniz: ");
			scanf("%f",&ilksayac);
		}
		
		//sayacın son değerinin alımı.
		printf("\nSon sayac degerini giriniz: ");
		scanf("%f",&sonsayac);
		
		while(sonsayac<ilksayac)
		{
			printf("\nSon sayaci hatali girdiniz.\n");
			printf("\nSon sayac degerini tekrar giriniz: ");
			scanf("%f",&sonsayac);
		}	
		
		//fatura süresi, kullanım süresinin alımı.
		printf("\nSayac okuma tarihleri arasinda gecen gun sayisini giriniz: ");
		scanf("%f",&sure);
		//0'dan büyük olması için tekrar kontrol ettirdim.
		while(sure<=0)
		{
			printf("\nGun sayisini hatali girdiniz.\n");
			printf("\nSayac okuma tarihleri arasinda gecen gun sayisini giriniz: ");
			scanf("%f",&sure);
		}
		
		//net olarak ne kadar kullandığımızı belirledik.
		kullanim = sonsayac-ilksayac;
		//kaç abone olduğunu hesapladık.
		toplamabone++;	
		switch(abonetipi)//abone tiplerine göre fiyat hesabı yapabilmek için case yapısı kullandık.
		{
			case 1: if(kullanim/sure>maxsutukkonutgunortsu)
					{ //günlük ortalama su tüketimi en fazla olan konut abonesini bulduk.
						maxsutukkonutgunortsu=kullanim/sure;
					}
					tip1sayi++;//konut tipinin sayısını hesap ettik.
					tip1topsure+=sure;// konut tipinin toplam kullanım süresini hesap ettik.
					tip1topsutuk+=kullanim;//konut tipinni toplam kullanımını hesap ettik.
					atiksuucret = kullanim*1.91;//atık su ucretinin hesabı.
					//kademe kontrol
					if(kullanim<=13*sure/30)
					{
						sukullanimucret = 2.24*kullanim;
						kademe1altkonut++;
					}  
						else if(kullanim<=20*sure/30)
					{
						sukullanimucret = ((13*(sure/30))*2.24+(kullanim-(13*(sure/30)*5.78)));
					}
						else
					{  
						sukullanimucret = 13*sure/30*2.24+7*sure/30*5.78+(kullanim*(sure/30)*9.33)+(kullanim-20)*9.33*sure/30;
					}
					//konut tipinin toplam su tuketim ucretinin hesabını yaptık.
					tip1topsutukucret+=sukullanimucret;
					break;
 
			case 2: tip2sayi++;//zaten bütün case yapılarında aynı şeyleri yaptık.
					tip2topsure+=sure;
					tip2topsutuk+=kullanim;
					atiksuucret = kullanim*3.79;
					if (kullanim<=10*sure/30)
					{
						sukullanimucret = kullanim*7.71;
					}        
					else
					{
						sukullanimucret = (10*7.71+(kullanim-10)*8.88);
						kademe1ustisyer++;
					}
					tip2topsutukucret+=sukullanimucret;
					break;
 
			case 3: tip3sayi++;
					tip3topsure+=sure;
					tip3topsutuk+=kullanim;
					atiksuucret = kullanim*2.56;
					sukullanimucret = kullanim * 6.64;
					tip3topsutukucret+=sukullanimucret;
					break;
 
			case 4: tip4sayi++;
					tip4topsutuk+=kullanim;
					tip4topsure+=sure;
					atiksuucret = kullanim*1.91;
					sukullanimucret = kullanim*5.78;
					if (sukullanimucret>maxsutukucret)
					tip4topsutukucret+=sukullanimucret;
					break;
		}
		topatiksuucreti+= atiksuucret;//toplam atık su ucretini hesapladık.
		if(maxayliksutukucreti<sukullanimucret)//en fazla aylık su tuketim ucretinin ayrıntılarını hesapladık.
		{
			maxayliksutukucreti=sukullanimucret;
			maxsutukucrettip=abonetipi;
			maxayliksutuk=kullanim;
		}
		if(atiksuucret>maxaylikatiksuucreti)// en fazla aylık atık su ucretinin özelliklerini hesapladık.
		{
			maxaylikatiksuucreti=atiksuucret;
			maxaylikatiksutip=abonetipi;
			maxaylikatiksukullanim=kullanim;
		}
		abonekdv = ((sukullanimucret+atiksuucret)/100)*8; //kdv hesabı yaptık.
		abonetoplamfatura = sukullanimucret+ atiksuucret + abonekdv;//toplam faturayı hesapladık.
		//tablo şeklinde bir kullanıcı için kullanım istatistiklerini yazdık.
		printf("\nAbone Tipi  Aylik Su Tuketimi  Aylik Su Tuketim Ucreti  Aylik Atik Su Ucreti  Toplam KDV  Toplam Fatura\n");
		printf("----------  -----------------  -----------------------  --------------------  ----------  --------------\n");
		printf("%d           %.f                 %.2f                    %.2f                 %.2f        %.2f",abonetipi,
		kullanim,sukullanimucret,atiksuucret,abonekdv,abonetoplamfatura);
		printf("\n---------------------------------------------------------------------------------------------------------");
		yeniabonekontrol=0;//tekrar abone girilebilmesi için gerekli ayarlamalarıyaptık.
		yeniabonegiriskontrol=0;
		toplamkdv+=abonekdv;//toplam kdvyi hesapladık.
		
		while(yeniabonegiriskontrol==0)//yanlış değer girmesi durumunda tekrar sorabilmesi için döngü kullandık.
		{
			printf("\n\n\nBaska Abone Girecek Misiniz?(e/h): ");
			scanf("%s",&yeniabonesor);
 			do
 			{
				yeniabonegiriskontrol=0;
				break;	
			}
			while(yeniabonesor!='e' || yeniabonesor!='E' && yeniabonesor!='h' || yeniabonesor!='H');
			do
			{
			if ((yeniabonesor=='e')||(yeniabonesor=='E'))
			{
				printf("\n");
				yeniabonekontrol=1;
				yeniabonegiriskontrol=1;
				abonetipkontrol=0;
			}
			else if ((yeniabonesor=='h')||(yeniabonesor=='H'))
			{
				yeniabonekontrol=0;
				yeniabonegiriskontrol=1;
	    	}
			}
	    	while(yeniabonesor=='e' && yeniabonesor=='E' && yeniabonesor=='h' && yeniabonesor=='H');
		}
	}
		tip1yuzde=(tip1sayi/toplamabone)*100;
		tip2yuzde=(tip2sayi/toplamabone)*100;
		tip3yuzde=(tip3sayi/toplamabone)*100;
		tip4yuzde=(tip4sayi/toplamabone)*100;
		
		if(tip1topsure>0)//sıfıra bölünme hatasının önüne geçtik.
			tip1ortsutuk=tip1topsutuk/tip1topsure;
		if(tip2topsure>0)
			tip2ortsutuk=tip2topsutuk/tip2topsure;
		if(tip3topsure>0)
			tip3ortsutuk=tip3topsutuk/tip3topsure;
		if(tip4topsure>0)
			tip4ortsutuk=tip4topsutuk/tip4topsure;
			
		//tüm kullanıcılar için istenilen istatistikleri tabloladık.
		printf("1-) Abone Tipi      Abone Say    Yuzde   Gunluk Ort Tuk\n");
		printf("    __________      _________    _____   ______________\n\n");
		printf("    Konut           %.f           %.2f    %.2f ton  \n",tip1sayi,tip1yuzde,tip1ortsutuk);
		printf("    Isyeri          %.f           %.2f    %.2f ton  \n",tip2sayi,tip2yuzde,tip2ortsutuk);
		printf("    Kamu Kurumu     %.f           %.2f    %.2f ton  \n",tip3sayi,tip3yuzde,tip3ortsutuk);
		printf("    Turistik Tesis  %.f           %.2f    %.2f ton  \n",tip4sayi,tip4yuzde,tip4ortsutuk);
		printf("\n\n");
		printf("2-) Aylik su tuketimi birinci kademeyi asmayan Konut;\nsayisi: %.f\nyuzdesi: %.2f\n",kademe1altkonut,(kademe1altkonut/tip1sayi)*100);
		printf("\n\n");
		printf("3-) Aylik su tuketimi birinci kademeyi asan Isyeri;\n sayisi: %.f\nyuzdesi: %.2f\n",kademe1ustisyer,((kademe1ustisyer/tip2sayi)*100));
		printf("\n\n");
		printf("4-) Gunluk ortalama su tuketimi en yuksek olan konut tipi abonenin gunluk ortalama su tuketimi: %.2f ton\n",maxsutukkonutgunortsu);
		printf("\n\n");
		printf("5-) Aylik su tuketim ucreti en yuksek olan abonenin;\nabone tipi: %.f\naylik su tuketim miktari: %.2f ton\n odedigi aylik atik su ucreti: %.2f TL\n",
		maxsutukucrettip,maxayliksutuk,maxayliksutukucreti);
		printf("\n\n");
		printf("6-) Aylik atik su ucreti en yuksek olan abonenin;\nabone tipi: %.f\naylik su tuketim miktari: %.2f\nodedigi aylik atik su ucreti: %.2f\n",
		maxaylikatiksutip,maxaylikatiksukullanim,maxaylikatiksuucreti);
		printf("\n\n");
		printf("7-) Abone Tipi	    Toplam Su Tuk Miktari\n");
		printf("    ___________     _____________________\n");
		printf("	Konut           :	 %.f ton\n",tip1topsutuk);
		printf("	Isyeri          :	 %.f ton\n",tip2topsutuk);
		printf("	Kamu Kurumu     :	 %.f ton\n",tip3topsutuk);
		printf("	Turistik Tesis  :	 %.f ton\n\n",tip4topsutuk);
		printf("	Toplam		:	 %.f ton",(tip1topsutuk+tip2topsutuk+tip3topsutuk+tip4topsutuk));
		printf("\n\n");
		printf("8-) Abone Tipi	    Toplam Su Tuk Ucreti\n");
		printf("    ___________     ___________________\n");
		printf("	Konut           : 	 %.2f TL\n",tip1topsutukucret);
		printf("	Isyeri          : 	 %.2f TL\n",tip2topsutukucret);
		printf("	Kamu Kurumu     : 	 %.2f TL\n",tip3topsutukucret);
		printf("	Turistik Tesis  : 	 %.2f TL\n\n",tip4topsutukucret);
		printf("	Toplam		:	 %.2f TL\n",(tip1topsutukucret+tip2topsutukucret+tip3topsutukucret+tip4topsutukucret));
		printf("\n\n");
		printf("9-) Toplam atik su ucreti hasilati:   TL %.2f\n",topatiksuucreti);
		printf("\n\n");
		printf("10-) Toplam KDV tutari: TL %.2f\n",toplamkdv);
	return 0;
}
