  #include <iostream>

using namespace std ;
int main()
{
	int Ayah, Ibu, Anak1, Anak2, x, x1, x2, x3 ;
	
	cout<<"Umur Ayah :" ;
	cin>>ayah ;
	cout<<"Umur Ibu : " ;
	cin>>ibu ;
	cout<<"Umur Anak 1 : " ;
	cin>>anak1 ;
	cout<<"Umur Anak 2 : " ;
	cin>>anak2 ;
	
	if(ayah >0 && ayah<=12){
	x : 15000 ;
	}
	else if(ayah >=12 && ayah <=20){
	x = 20000 ;
	}
	else if(ayah >20){
	x = 30000 ;
	}
	if(ibu >0 && ibu <=12){
	x1= 15000 ;
	}
	else if (ibu >=12 && ibu <=20){
	x1= 20000 ;
	}
	else if (ibu >20){
		x1= 30000 ;
	}
	if (anak1 >0 && anak1 <=12){
		x2 = 15000 ;
	}
	else if (anak1 >=12 && anak1 <=20){
		x2 = 20000 ;
	}
	else if (anak1 >20){
		x2 = 30000 ;
	}
	if (anak2 >0 && anak2 <=12){
		x3 = 15000 ;
	}
	else if (anak2 >=12 && anak2 <=20){
		x3 = 20000 ;
	}
	else if (anak2 >20){
		x3 = 30000 ;
	}
	cout<<"Bantuan untuk satu bulan = Rp."<<(x*30)+(x1*30)+(x2*30)+(x3*30)<<endl ;
	return 0 ;
	
}
