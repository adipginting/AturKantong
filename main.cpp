#include<iostream>
#include<map>
#include<string>

int main(){
  std::string ulang = "y";
  std::string barang = "";
  int harga = 0;
  int saldo = 0;
  int nomor = 0;
  int jumlahHarga = 0;
  std::map< std::string, int > belanja;
  
  std::cout<<"Saldo = ";std::cin>>saldo;
  while(ulang == "y"){
    std::cout<<"Item: "; std::cin>>barang;
    std::cout<<"Harga: "; std::cin>>harga;
    belanja.insert({barang,harga});
    std::cout<<"Tambah? (y/n): "; std::cin>>ulang;
  }


  std::cout<< "Barang          " << "Harga"<< std::endl;
  auto it = belanja.begin();
  while(it != belanja.end()){
    nomor++;
    std::cout<<nomor<<". " <<it->first << " " << it->second << std::endl;
    jumlahHarga = jumlahHarga + it->second;
    it++;
  }

  std::cout<<"Jumlah belanja = Rp. "<<jumlahHarga<<std::endl;
  std::cout<<"Sisa uang = "<< saldo - jumlahHarga <<std::endl;
}
