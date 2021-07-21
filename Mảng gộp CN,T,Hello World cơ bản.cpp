#include <iostream>
#include <string>
struct ConNguoi
{
	std::string ho_ten;
	int tuoi;
	float chieu_cao;
	float can_nang;
	int so_do_3_vong[3];

};

void chi_so_BMI(ConNguoi nguoi)
{
	float bmi = nguoi.can_nang / (nguoi.chieu_cao + nguoi.chieu_cao);
	std::cout << "Ket qua BMI cua ban" << nguoi.ho_ten << " " << bmi << std::endl;

};

int main()
{
	ConNguoi nguoi;
	nguoi.ho_ten = "Henry Nguyen Coder";
	nguoi.tuoi = 27;
	nguoi.chieu_cao = 1.70;
	nguoi.can_nang = 54;

	chi_so_BMI(nguoi);
	std::cout << nguoi.ho_ten << std::endl;
	system("pause");
	return 0;
}


int main()
{
	int tuoi = 27;
	float chieu_cao = 1.70;
	float can_nang = 54;
	char nhom_mau = 'AB';
	bool binh_thuong = true;
	int so_do_3_vong[3] = { 50, 70, 65 };
	std::string ho_ten = "Henry Nguyen";
	std::string nghe_nghiep = "Coder";


	std::cout << ho_ten + " " + nghe_nghiep << std::endl;


	system("pause");
	return 0;

}