#include <iostream>
using namespace std;
class MasukUniversitas {
	public: // isi access modifier disini
	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangsemesterpertama;
	int uangbangunan;
	int totalbiaya;
	
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
		uangsemesterpertama = 0;
		uangbangunan = 0;
		totalbiaya = 0;
	}
	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	virtual void hitungtotalbiaya() { return; }
	virtual void tampilkantotalbiaya() { return; }
	virtual void input() { return; }

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini

	void setuangsemesterpertama(int nilai) {
		this->uangsemesterpertama = nilai;
	}
	float getuangsemesterpertama() {
		return uangsemesterpertama;
	}

	void setuangbangunan(int nilai) {
		this->uangbangunan = nilai;
	}
	float getuangbangunan() {
		return uangbangunan;
	}

	void settotalbiaya(int nilai) {
		this->totalbiaya = nilai;
	}
	float gettotalbiaya() {
		return totalbiaya;
	}
};

class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
	int total;
public:
	void uangPendaftaran() { 
		cout << "Masukan uang pendaftaran: " << uangPendaftaran << endl;
	}
	void uangsemesterpertama() {
		cout << "Masukan uang semester pertama: " << setuangsemesterpertama << endl;
	}
	void uangbangunan() {
		cout << "Masukan uang bangunan: " << uangbangunan << endl;
	}
	void totalbiaya() {
		total = uangPendaftaran + uangsemesterpertama + uangbangunan;
		cout << "Total SNPT: " << total << endl;
	}
	void displaysnbt() {

	}
};

class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
	int total;
public:
	void uangPendaftaran() {
		cout << "Masukan uang pendaftaran: " << uangPendaftaran << endl;
	}
	void uangsemesterpertama() {
		cout << "Masukan uang semester pertama: " << setuangsemesterpertama << endl;
	}
	void totalbiaya() {
		total = uangPendaftaran + uangsemesterpertama;
		cout << "Total SMBP:" << total << endl;
	}
	void displaysnbp() {

	}
};

int main() {
	// isi disini untuk fungsi main
	MasukUniversitas* jalur;
	SNBT t;
	SNBP p;
	
	while (true) {
		cout << endl;
		cout << "Pilih Jalur Masuk: " << endl;
		cout << "1. SNBT: " << endl;
		cout << "2. SNBP: " << endl;
		cout << "3. Keluar " << endl;
		cout << "Pilih (1-3): " << endl;

		int biaya;
		cin >> biaya;
		cout << endl;

		switch (biaya) {
		case '1':
		{
			cout << "Masukan uang pendaftaran: ";
			int uang;
			cin >> uang;

		}
		}
	}
}