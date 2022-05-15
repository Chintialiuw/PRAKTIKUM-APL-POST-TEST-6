//Standard Library C++
#include <iostream> //Untuk menampilkan perintah cin, cout, dan endl
#include <conio.h> //Untuk menampilkan perintah getch dan system("cls")
#include <stdlib.h> //Untuk menampilkan perintah atoi (mengubah string menjadi integer)

//Standard Library C++
using namespace std;

//Prosedur atau Fungsi untuk menampilkan tampilan awal program
void intro()
{
    cout<<"=========================================================================="<<endl;
	cout<<"                      Program Pendataan Hewan Kurban                      "<<endl;
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan tampilan pilihan menu utama
void pilih_menu()
{
    cout<<"Silahkan Pilih Menu"<<endl;
    cout<<"[1] Masukkan Data"<<endl;
    cout<<"[2] Menampilkan Data"<<endl;
    cout<<"[3] Mengedit Data"<<endl;
    cout<<"[4] Menghapus Data"<<endl;
    cout<<"[5] Keluar"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan tampilan pilihan hewan
void pilih_hewan()
{
    cout<<"[A] Sapi"<<endl;
    cout<<"[B] Kambing"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital !"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan tampilan pilihan mode tampilan pada menu "Menampilkan Data"
void mode_tampilan()
{
    cout<<"[A] Searching (Pencarian)"<<endl;
    cout<<"[B] Sorting (Pengurutan)"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan tampilan pilihan cara pengurutan pada menu "Sorting"
void urutan()
{
    cout<<"[A] Ascending (Kecil ke Besar)"<<endl;
    cout<<"[B] Descending (Besar ke Kecil)"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan tampilan pilihan jenis objek sorting atau pengurutan
void jenis_sort()
{
    cout<<"[A] Nama"<<endl;
    cout<<"[B] Umur"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital [A / B]"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan tampilan pilihan jenis objek searching atau pencarian
void jenis_search()
{
    cout<<"[A] Nama"<<endl;
    cout<<"[B] Harga"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital [A / B]"<<endl;
}

//Struct untuk menampung data pada Sapi
struct sapi
{
    string nama;
    int umur;
    float berat;
    int harga;
};

//Struct untuk menampung data pada Kambing
struct kambing
{
    string nama;
    int umur;
    float berat;
    int harga;
};

//Deklarasi Array di dalam Struct pada data Sapi dan Kambing (Variabel Global)
struct sapi Sapi[5];
struct kambing Kambing[5];

//Deklarasi Konstanta agar data yang ditampung di dalam Array tidak dapat diubah (data tidak bisa lebih dari 5)
const int i = 5;

//Prosedur atau Fungsi untuk menampilkan menu "Masukkan Data"
void masukkan_data()
{
    //Pendeklarasian
    int banyak_sapi, banyak_kambing;
    int i; //i = deklarasi untuk perulangan for
    string pilihan;

    //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    pilih_hewan();
    cout<<"Masukkan Pilihan Hewan [A/B] : ";
    cin>>pilihan;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan kondisi yang telah dipilih user
    if (pilihan == "A")
    {
        cout<<"Masukkan Jumlah Data Sapi yang ingin ditambahkan : ";
        cin>>banyak_sapi;
        cout<<"=========================================================================="<<endl;

        //Perulangan For untuk memasukkan data sapi sesuai yang diinginkan oleh user
        for (i = 0; i < banyak_sapi; i++)
        {
            //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
            //pada program agar tidak terjadi hambatan pada saat dipanggil
            cout<<"Sapi Nomor "<<i+1<<endl;
            cout<<"Nama     : ";
            cin>>Sapi[i].nama;fflush(stdin);
            cout<<"Umur     : ";
            cin>>Sapi[i].umur;fflush(stdin);
            cout<<"Berat    : ";
            cin>>Sapi[i].berat;fflush(stdin);
            cout<<"Harga    : ";
            cin>>Sapi[i].harga;fflush(stdin);
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Tersimpan                         "<<endl;
        cout<<"=========================================================================="<<endl;
    }
    else if (pilihan == "B")
    {
        cout<<"Masukkan Jumlah Data Kambing yang ingin ditambahkan : ";
        cin>>banyak_kambing;
        cout<<"=========================================================================="<<endl;

        //Perulangan For untuk memasukkan data kambing sesuai yang diinginkan oleh user
        for (i = 0; i < banyak_kambing; i++)
        {
            //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
            //pada program agar tidak terjadi hambatan pada saat dipanggil
            cout<<"Kambing Nomor "<<i+1<<endl;
            cout<<"Nama     : ";
            cin>>Kambing[i].nama;fflush(stdin);
            cout<<"Umur     : ";
            cin>>Kambing[i].umur;fflush(stdin);
            cout<<"Berat    : ";
            cin>>Kambing[i].berat;fflush(stdin);
            cout<<"Harga    : ";
            cin>>Kambing[i].harga;fflush(stdin);
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Tersimpan                         "<<endl;
        cout<<"=========================================================================="<<endl;
    }
    else 
    {
        cout<<"=========================================================================="<<endl;
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda pada program
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu pilihan "Tampilkan Data Sapi"
void tampil_data_sapi()
{
    //Pendeklarasian
    int i = 0; //i = deklarasi untuk perulangan for

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                                 Data Sapi                                "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    //Perulangan For untuk menampilkan data sapi
    for (i = 0; i < 5; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan menu pilihan "Tampilkan Data Kambing"
void tampil_data_kambing()
{
    //Pendeklarasian
    int i = 0; //i = deklarasi untuk perulangan for

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                                Data Kambing                              "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    
    //Perulangan For untuk menampilkan data kambing
    for (i = 0; i < 5; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menghitung pengurutan harga sapi dengan menggunakan Bubble Sort
//sebelum melakukan searching dengan menggunakan "Interpolation Search" 
//agar data dapat terurut terlebih dahulu
void rumus_pengurutan_searching_harga_sapi()
{
    //Pendeklarasian
    int i, j; //i dan j = deklarasi untuk perulangan for
    int tukar;

    //Perulangan For untuk menghitung pengurutan harga sapi
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(Sapi[j].harga > Sapi[j+1].harga)
            {
                tukar = Sapi[j].harga;
                Sapi[j].harga = Sapi[j+1].harga;
                Sapi[j+1].harga = tukar;
            }
        }
    }
}

//Prosedur atau Fungsi untuk menghitung pengurutan harga kambing dengan menggunakan Bubble Sort
//sebelum melakukan searching dengan menggunakan "Interpolation Search" 
//agar data dapat terurut terlebih dahulu
void rumus_pengurutan_searching_harga_kambing()
{
    //Pendeklarasian
    int i, j; //i dan j = deklarasi untuk perulangan for
    int tukar;

    //Perulangan For untuk menghitung pengurutan harga sapi
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(Kambing[j].harga > Kambing[j+1].harga)
            {
                tukar = Kambing[j].harga;
                Kambing[j].harga = Kambing[j+1].harga;
                Kambing[j+1].harga = tukar;
            }
        }
    }
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu tampilan data secara "Searching"
void tampil_data_searching()
{
    //Pendeklarasian
    int i; //i = deklarasi untuk perulangan for
    string pilih, cara;

    cout<<"Silahkan Pilih Data Hewan yang ingin diurutkan"<<endl;
    pilih_hewan(); // Pemanggilan Fungsi atau Prosedur void pilih_hewan

    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;

    cout<<"Silahkan Pilih Cara Pencarian"<<endl;
    jenis_search(); // Pemanggilan Fungsi atau Prosedur void jenis_search

    cout<<"Lakukan Pencarian Berdasarkan ... ";
    cin>>cara;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan beberapa kondisi yang telah diinputkan oleh user
    if (pilih == "A" && cara == "A")
    {
        //Pendeklarasian
        int i; //i = deklarasi untuk perulangan for
        bool flag;
        string cari_data;
        
        cout<<"Masukkan Nama Sapi yang ingin Anda cari : ";
        cin>>cari_data;
        cout<<"=========================================================================="<<endl;

        //Perulangan For untuk mencari data yang diinputkan oleh user
        for (i = 0; i < 5; i++)
        {
            if (Sapi[i].nama == cari_data)
            {
                flag = true;
                break; //Perintah untuk memaksa perulangan berhenti jika kondisi tersebut cocok
            }
        }
        //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan user
        if (flag == 1)
        {
            cout<<"Nama "<<cari_data<<" ditemukan pada Sapi nomor "<<i+1<<endl;
            cout<<"\nNama     : "<<Sapi[i].nama<<endl;
            cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        }
        else
        {
            cout<<"=========================================================================="<<endl;
            cout<<"Mohon Maaf Nama Sapi yang Anda Cari Tidak Ada"<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "A" && cara == "B")
    {
        //Pendeklarasian
        int cari_data, posisi, awal, akhir;
        bool berhenti = false;

        cout<<"Tuliskan Harga Tanpa Kata Rp ! [16000000]"<<endl;
        cout<<"Masukkan Harga Sapi yang ingin Anda cari : ";
        cin>>cari_data;
        cout<<"=========================================================================="<<endl; 
        awal = 0;  
        akhir = 5 - 1; 

        //Pemanggilan Fungsi atau Prosedur void rumus_pengurutan_searching_harga_sapi 
        rumus_pengurutan_searching_harga_sapi();

        //Perulangan while untuk mencari data yang telah diinputkan oleh user
        while(berhenti != true) 
        { 
            posisi =(((cari_data - Sapi[awal].harga) * (akhir - awal)) / (Sapi[akhir].harga - Sapi[awal].harga) + awal); 

            //Percabangan if else untuk mengelompokkan kondisi yang ada
            if(Sapi[posisi].harga == cari_data) 
            { 
                cout<<"Harga Sapi sebesar Rp. "<<cari_data<<" ditemukan pada Sapi nomor "<<posisi+1<<endl;
                cout<<"\nNama     : "<<Sapi[posisi].nama<<endl;
                cout<<"Umur     : "<<Sapi[posisi].umur<<" Tahun"<<endl;
                cout<<"Berat    : "<<Sapi[posisi].berat<<" Kg"<<endl;
                cout<<"Harga    : Rp. "<<Sapi[posisi].harga<<endl;
                berhenti = true; 
            }
            else if(Sapi[posisi].harga < cari_data) 
            { 
                awal = posisi + 1; 
            }
            else 
            { 
                cout<<"=========================================================================="<<endl;
                cout<<"Mohon Maaf Harga Sapi yang Anda Cari Tidak Ada"<<endl;
                berhenti = true; 
            } 
            cout<<"=========================================================================="<<endl;
        } 
    }
    else if (pilih == "B" && cara == "A")
    {
        //Pendeklarasian
        int i;
        bool flag;
        string cari_data;
        
        cout<<"Masukkan Nama Kambing yang ingin Anda cari : ";
        cin>>cari_data;
        cout<<"=========================================================================="<<endl;

        //Perulangan For untuk mencari data yang diinputkan oleh user
        for (i = 0; i < 5; i++)
        {
            if (Kambing[i].nama == cari_data)
            {
                flag = true;
                break; //Perintah untuk memaksa perulangan berhenti jika kondisi tersebut cocok
            }
        }

        //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan user
        if (flag == 1)
        {
            cout<<"Nama "<<cari_data<<" ditemukan pada Kambing nomor "<<i+1<<endl;
            cout<<"\nNama     : "<<Kambing[i].nama<<endl;
            cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        }
        else
        {
            cout<<"=========================================================================="<<endl;
            cout<<"Mohon Maaf Nama Kambing yang Anda Cari Tidak Ada"<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "B" && cara == "B")
    {
        //Pendeklarasian
        int cari_data, posisi, awal, akhir;
        bool berhenti = false;

        cout<<"Tuliskan Harga Tanpa Kata Rp ! [16000000]"<<endl;
        cout<<"Masukkan Harga Kambing yang ingin Anda cari : ";
        cin>>cari_data;
        cout<<"=========================================================================="<<endl; 
        awal = 0;  
        akhir = 5 - 1;  

        //Pemanggilan Fungsi atau Prosedur void rumus_pengurutan_searching_harga_kambing
        rumus_pengurutan_searching_harga_kambing();

        //Perulangan while untuk mencari data yang telah diinputkan oleh user
        while(berhenti != true) 
        { 
            posisi =(((cari_data - Kambing[awal].harga) * (akhir-awal)) / (Kambing[akhir].harga - Kambing[awal].harga) + awal); 
            
            //Percabangan if else untuk mengelompokkan kondisi yang ada
            if(Kambing[posisi].harga == cari_data) 
            { 
                cout<<"Harga Kambing sebesar Rp. "<<cari_data<<" ditemukan pada Kambing nomor "<<posisi+1<<endl;
                cout<<"\nNama     : "<<Kambing[posisi].nama<<endl;
                cout<<"Umur     : "<<Kambing[posisi].umur<<" Tahun"<<endl;
                cout<<"Berat    : "<<Kambing[posisi].berat<<" Kg"<<endl;
                cout<<"Harga    : Rp. "<<Kambing[posisi].harga<<endl;
                berhenti = true; 
            }
            else if(Kambing[posisi].harga < cari_data) 
            { 
                awal = posisi + 1; 
            }
            else 
            { 
                cout<<"=========================================================================="<<endl;
                cout<<"Mohon Maaf Harga Kambing yang Anda Cari Tidak Ada"<<endl;
                berhenti = true; 
            } 
            cout<<"=========================================================================="<<endl;
        } 
    }
    else 
    {
        cout<<"=========================================================================="<<endl;
        cout<<"Mohon Maaf Pilihan yang Anda Masukkan Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda pada program
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menghitung rumus nama sapi dengan menggunakan Metode Bubble Sort
//dan secara Ascending
void rumus_bubble_sort_ASC_nama_sapi(int a, sapi Sapi[5])
{
    //Pendeklarasian
    int i, j, l; //i, j, dan l = deklarasi untuk perulangan for

    //temp digunakan sebagai tempat penyimpanan sementara saat proses menukar data berlangsung
    sapi temp;

    //Perulangan For untuk mengurutkan data
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            for (l = 0; l < 5; l++)
            {
                //Percabangan if else untuk mengelompokkan beberapa kondisi yang ada
                if (Sapi[i].nama[l] < Sapi[j].nama[l])
                {
                    break;
                }
                else if (Sapi[i].nama[l] > Sapi[j].nama[l])
                {
                    temp = Sapi[i];
                    Sapi[i] = Sapi[j];
                    Sapi[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk menghitung rumus nama kambing dengan menggunakan Metode Bubble Sort
//dan secara Ascending
void rumus_bubble_sort_ASC_nama_kambing(int a, kambing Kambing[5])
{
    //Pendeklarasian
    int i, j, l; //i, j, dan l = deklarasi untuk perulangan for

    //temp digunakan sebagai tempat penyimpanan sementara selama proses menukar data berlangsung
    kambing temp;

    //Perulangan For untuk mengurutkan data
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            for (l = 0; l < 5; l++)
            {
                //Percabangan if else untuk mengelompokkan beberapa kondisi yang ada
                if (Kambing[i].nama[l] < Kambing[j].nama[l])
                {
                    break;
                }
                else if (Kambing[i].nama[l] > Kambing[j].nama[l])
                {
                    temp = Kambing[i];
                    Kambing[i] = Kambing[j];
                    Kambing[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk menghitung rumus nama sapi dengan menggunakan Metode Bubble Sort
//dan secara Descending
void rumus_bubble_sort_DSC_nama_sapi(int a, sapi Sapi[5])
{
    //Pendeklarasian
    int i, j, l; //i, j, dan l = deklarasi untuk perulangan for

    //temp digunakan sebagai tempat penyimpanan sementara selama proses pertukaran data berlangsung
    sapi temp;

    //Perulangan For untuk mengurutkan data
    for (i = 5; i > a; i--)
    {
        for (j = i - 1; j > a; j--)
        {
            for (l = 5; l > 0; l--)
            {
                //Percabangan if else untuk mengelompokkan beberapa kondisi yang ada
                if (Sapi[i].nama[l] > Sapi[j].nama[l])
                {
                    break;
                }
                else if (Sapi[i].nama[l] < Sapi[j].nama[l])
                {
                    temp = Sapi[i];
                    Sapi[i] = Sapi[j];
                    Sapi[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk menghitung rumus nama kambing dengan menggunakan Metode Bubble Sort
//dan secara Descending
void rumus_bubble_sort_DSC_nama_kambing(int a, kambing Kambing[5])
{
    //Pendeklarasian
    int i, j, l; //i, j, dan l = deklarasi untuk perulangan for

    //temp digunakan sebagai tempat penyimpanan sementara selama proses pertukaran data berlangsung
    kambing temp;

    //Perulangan For untuk mengurutkan data
    for (i = 5; i > a; i--)
    {
        for (j = i - 1; j > a; j--)
        {
            for (l = 5; l > 0; l--)
            {
                //Percabangan if else untuk mengelompokkan beberapa kondisi yang ada
                if (Kambing[i].nama[l] > Kambing[j].nama[l])
                {
                    break;
                }
                else if (Kambing[i].nama[l] < Kambing[j].nama[l])
                {
                    temp = Kambing[i];
                    Kambing[i] = Kambing[j];
                    Kambing[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu tampilan data secara "Sorting"
void tampil_data_sorting()
{
    //Pendeklarasian
    int i; //i = deklarasi untuk perulangan for
    string pilih, cara, metode;

    cout<<"Silahkan Pilih Data Hewan yang ingin diurutkan"<<endl;
    pilih_hewan(); //Pemanggilan Fungsi atau Prosedur void pilih_hewan

    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;

    cout<<"Silahkan Pilih Cara Pengurutan"<<endl;
    jenis_sort(); //Pemanggilan Fungsi atau Prosedur void jenis_sort

    cout<<"Lakukan Pengurutan Berdasarkan ... ";
    cin>>cara;
    cout<<"=========================================================================="<<endl;

    cout<<"Silahkan Pilih Metode Pengurutan"<<endl;
    urutan(); // Pemanggilan Fungsi atau Prosedur void urutan

    cout<<"Masukkan Pilihan Metode : ";
    cin>>metode;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan beberapa kondisi yang ada
    if (pilih == "A" && cara == "A" && metode == "A")
    {
        //Pendeklarasian
        int ubah;
        int i; //i = deklarasi untuk perulangan for
        char jumlah[5];
        cout<<"Masukkan Jumlah Data yang ingin diurut : ";
        cin>>jumlah;
        cout<<"=========================================================================="<<endl;

        //atoi untuk mengubah tipe data char ke dalam integer
        ubah = atoi (jumlah);

        //Pemanggilan Fungsi atau Prosedur void rumus_bubble_sort_ASC_nama_sapi
        rumus_bubble_sort_ASC_nama_sapi(ubah, Sapi);

        //Perulangan for untuk menampilkan hasil pengurutan
        for (i = 0; i < ubah; i++)
        {
            cout<<"Sapi Nomor "<<i+1<<endl;
            cout<<"Nama     : "<<Sapi[i].nama<<endl;
            cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "A" && cara == "A" && metode == "B")
    {
        //Pendeklarasian
        int ubah,urut;
        int i; //i = deklarasi untuk perulangan for
        urut = 0;
        char jumlah[5];
        cout<<"Masukkan Jumlah Data yang ingin diurut : ";
        cin>>jumlah;
        cout<<"=========================================================================="<<endl;

        //atoi untuk mengubah tipe data char ke dalam integer
        ubah = atoi (jumlah);

        //Pemanggilan Fungsi atau Prosedur void rumus_bubble_sort_DSC_nama_sapi
        rumus_bubble_sort_DSC_nama_sapi(ubah, Sapi);

        //Perulangan for untuk menampilkan hasil pengurutan
        for (i = ubah; i > 0; i--)
        {
            cout<<"Sapi Nomor "<<urut+1<<endl;
            urut++;
            cout<<"Nama     : "<<Sapi[i].nama<<endl;
            cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "A" && cara == "B" && metode == "A")
    {
        //Pendeklarasian
        int i, j; //i dan j = deklarasi untuk perulangan for
        int tukar;

        //Perulangan For untuk mengurutkan data
        for (i = 0; i < 5; i++)
        {
            for(j = 0; j < 5 - i - 1; j++)
            {
                if(Sapi[j].umur > Sapi[j+1].umur)
                {
                    tukar = Sapi[j].umur;
                    Sapi[j].umur = Sapi[j+1].umur;
                    Sapi[j+1].umur = tukar;
                }
            }
        }

        //Perulangan for untuk menampilkan hasil pengurutan
        for (i = 0; i < 5; i++)
        {
            cout<<"Sapi Nomor "<<i+1<<endl;
            cout<<"Nama     : "<<Sapi[i].nama<<endl;
            cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "A" && cara == "B" && metode == "B")
    {
        //Pendeklarasian
        int i, j; //i dan j = deklarasi untuk perulangan for
        int urut, tukar;
        urut = 0;

        //Perulangan For untuk mengurutkan data
        for (i = 5; i > 0; i--)
        {
            for(j = 5; j > 0; j--)
            {
                if(Sapi[j].umur < Sapi[j-1].umur)
                {
                    tukar = Sapi[j].umur;
                    Sapi[j].umur = Sapi[j-1].umur;
                    Sapi[j-1].umur = tukar;
                }
            }
        }

        //Perulangan For untuk menampilkan hasil pengurutan
        for (i = 5; i > 0; i--)
        {
            cout<<"Sapi Nomor "<<urut+1<<endl;
            urut++;
            cout<<"Nama     : "<<Sapi[i].nama<<endl;
            cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "B" && cara == "A" && metode == "A")
    {
        //Pendeklarasian
        int ubah;
        int i; //i = deklarasi untuk perulangan for
        char jumlah[5];
        cout<<"Masukkan Jumlah Data yang ingin diurut : ";
        cin>>jumlah;
        cout<<"=========================================================================="<<endl;

        //atoi untuk mengubah tipe data char ke dalam integer
        ubah = atoi (jumlah);

        //Pemanggilan Fungsi atau Prosedur void rumus_bubble_sort_DSC_nama_sapi
        rumus_bubble_sort_ASC_nama_kambing(ubah, Kambing);

        //Perulangan For untuk menampilkan hasil pengurutan
        for (i = 0; i < ubah; i++)
        {
            cout<<"Kambing Nomor "<<i+1<<endl;
            cout<<"Nama     : "<<Kambing[i].nama<<endl;
            cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "B" && cara == "A" && metode == "B")
    {
        //Pendeklarasian
        int ubah, urut;
        int i; //i = deklarasi untuk perulangan for
        urut = 0;
        char jumlah[5];
        cout<<"Masukkan Jumlah Data yang ingin diurut : ";
        cin>>jumlah;
        cout<<"=========================================================================="<<endl;

        //atoi untuk mengubah tipe data char ke dalam integer
        ubah = atoi (jumlah);

        //Pemanggilan Fungsi atau Prosedur void rumus_bubble_sort_DSC_nama_sapi
        rumus_bubble_sort_DSC_nama_kambing(ubah, Kambing);

        //Perulangan For untuk menampilkan hasil pengurutan
        for (i = ubah; i > 0; i--)
        {
            cout<<"Kambing Nomor "<<urut+1<<endl;
            urut++;
            cout<<"Nama     : "<<Kambing[i].nama<<endl;
            cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "B" && cara == "B" && metode == "A")
    {
        //Pendeklarasian
        int i, j; //i dan j = deklarasi perulangan for
        int tukar;

        //Perulangan For untuk mengurutkan data
        for (i = 0; i < 5; i++)
        {
            for(j = 0; j < 5 - i - 1; j++)
            {
                if(Kambing[j].umur > Kambing[j+1].umur)
                {
                    tukar = Kambing[j].umur;
                    Kambing[j].umur = Kambing[j+1].umur;
                    Kambing[j+1].umur = tukar;
                }
            }
        }

        //Perulangan For untuk menampilkan hasil dari pengurutan
        for (i = 0; i < 5; i++)
        {
            cout<<"Kambing Nomor "<<i+1<<endl;
            cout<<"Nama     : "<<Kambing[i].nama<<endl;
            cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else if (pilih == "B" && cara == "B" && metode == "B")
    {
        //Pendeklarasian
        int i, j; //i dan j = deklarasi untuk perulangan for
        int urut, tukar;
        urut = 0;

        //Perulangan For untuk mengurutkan data
        for (i = 5; i > 0; i--)
        {
            for(j = 5; j > 0; j--)
            {
                if(Kambing[j].umur < Kambing[j-1].umur)
                {
                    tukar = Kambing[j].umur;
                    Kambing[j].umur = Kambing[j-1].umur;
                    Kambing[j-1].umur = tukar;
                }
            }
        }

        //Perulangan For untuk menampilkan hasil pengurutan
        for (i = 5; i > 0; i--)
        {
            cout<<"Kambing Nomor "<<urut+1<<endl;
            urut++;
            cout<<"Nama     : "<<Kambing[i].nama<<endl;
            cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
            cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
            cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
            cout<<endl;
        }
        cout<<"=========================================================================="<<endl;
    }
    else 
    {
        cout<<"Mohon Maaf Pilihan yang Anda Masukkan Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda pada program
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu utama "Menampilkan Data"
void tampil_data_utama()
{
    //Pendeklarasian
    string mode;

    cout<<"Silahkan Pilih Mode Tampilan Data"<<endl;
    mode_tampilan(); //Pemanggilan Fungsi atau Prosedur void mode_tampilan

    cout<<"Masukkan Pilihan Mode : ";
    cin>>mode;
    cout<<"=========================================================================="<<endl;
    
    //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan oleh user
    if (mode == "A")
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data_searching
        tampil_data_searching();
    }
    else if (mode == "B")
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data sorting
        tampil_data_sorting();
    }
    else 
    {
        cout<<"=========================================================================="<<endl;
        cout<<"Mohon Maaf Pilihan Mode yang Anda Masukkan Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda pada program
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu utama "Mengedit Data"
void edit_data()
{
    //Pendeklarasian
    int nomor, edit;
    string pilihan;

    pilih_hewan(); //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    cout<<"Masukkan Pilihan Hewan [A/B] : ";
    cin>>pilihan;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan oleh user
    if (pilihan == "A")
    {
        tampil_data_sapi(); //Pemanggilan Fungsi atau Prosedur void tampil_data_sapi
        cout<<"Masukkan Nomor Sapi yang ingin diperbarui : ";
        cin>>nomor;
        cout<<"=========================================================================="<<endl;
        edit = nomor - 1;

        //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
        //pada program agar tidak terjadi hambatan pada saat dipanggil
        cout<<"Nama     : ";
        cin>>Sapi[edit].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[edit].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[edit].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[edit].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Diperbarui                        "<<endl;
        cout<<"=========================================================================="<<endl;
    }
    else if (pilihan == "B")
    {
        tampil_data_kambing(); //Pemanggilan Fungsi atau Prosedur void tampil_data_kambing
        cout<<"Masukkan Nomor Kambing yang ingin diperbarui : ";
        cin>>nomor;
        cout<<"=========================================================================="<<endl;
        edit = nomor - 1;

        //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
        //pada program agar tidak terjadi hambatan pada saat dipanggil
        cout<<"Nama     : ";
        cin>>Kambing[edit].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[edit].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[edit].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[edit].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Diperbarui                        "<<endl;
        cout<<"=========================================================================="<<endl;
    } 
    else
    {
        cout<<"=========================================================================="<<endl;
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda pada program
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan mneu utama "Menghapus Data"
void hapus_data()
{
    //Pendeklarasian
    int hapus;
    int i; //i = deklarasi untuk perulangan for
    string pilihan;
    
    pilih_hewan(); //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    cout<<"Masukkan Pilihan Hewan [A/B] : ";
    cin>>pilihan;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan oleh user
    if (pilihan == "A")
    {
        tampil_data_sapi(); //Pemanggilan Fungsi atau Prosedur void tampil_data_sapi
        cout<<"Masukkan Nomor Sapi yang ingin dihapus : ";
        cin>>hapus;

        //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan oleh user
        if (hapus < 6)
        {
            //Perulangan For untuk menghapus data pada sapi
            for (i = hapus - 1; i < 4 ; i++)
            {
                Sapi[i] = Sapi [i + 1];fflush(stdin);
            }
            cout<<"=========================================================================="<<endl;
            cout<<"                            Data Berhasil Dihapus                         "<<endl;
            cout<<"=========================================================================="<<endl;
        }
        else
        {
            cout<<"=========================================================================="<<endl;
            cout<<"Mohon Maaf Nomor Sapi yang dimasukkan Tidak Tersedia"<<endl;
            cout<<"=========================================================================="<<endl;
        }
    }
    else if (pilihan == "B")
    {
        tampil_data_kambing(); //Pemanggilan Prosedur atau Fungsi void tampil_data_kambing
        cout<<"Masukkan Nomor Kambing yang ingin dihapus : ";
        cin>>hapus;

        //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan oleh user
        if (hapus < 6)
        {
            //Perulangan For untuk menghapus data pada kambing
            for (i = hapus - 1; i < 4 ; i++)
            {
                Kambing[i] = Kambing [i + 1];fflush(stdin);
            }
            cout<<"=========================================================================="<<endl;
            cout<<"                            Data Berhasil Dihapus                         "<<endl;
            cout<<"=========================================================================="<<endl;
        }
        else
        {
            cout<<"=========================================================================="<<endl;
            cout<<"Mohon Maaf Nomor Kambing yang dimasukkan Tidak Tersedia"<<endl;
            cout<<"=========================================================================="<<endl;
        }
    }
    else
    {
        cout<<"=========================================================================="<<endl;
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda pada program
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

int main()
{
    //Pendeklarasian
    int jawab;

    //Pemanggilan Fungsi atau Prosedur void intro
    intro();

    //Label yang digunakan sebagai tempat pengulangan menu ketika dipanggil dengan
    //menggunakan perintah goto
    kembali:

    //Pemanggilan Fungsi atau Prosedur void pilih_menu
    pilih_menu();

    cout<<"\nMasukkan Pilihan Menu [1, 2, 3, 4, atau 5] : ";
    cin>>jawab;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan kondisi yang telah diinputkan oleh user
    if (jawab == 1)
    {
        //Pemanggilan Fungsi atau Prosedur void masukkan_data
        masukkan_data();

        //Perintah untuk melompat ke label "kembali" yang telah dideklarasikan di awal
        goto kembali;
    }
    else if (jawab == 2)
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data_utama
        tampil_data_utama();

        //Perintah untuk melompat ke label "kembali" yang telah dideklarasikan di awal
        goto kembali;
    }
    else if (jawab == 3)
    {
        //Pemanggilan Fungsi atau Prosedur void edit_data
        edit_data();

        //Perintah untuk melompat ke label "kembali" yang telah dideklarasikan di awal
        goto kembali;
    }
    else if (jawab == 4)
    {
        //Pemanggilan Fungsi atau Prosedur void hapus_data
        hapus_data();

        //Perintah untuk melompat ke label "kembali" yang telah dideklarasikan di awal
        goto kembali;
    }
    else if (jawab == 5)
    {
        cout<<"                               Terima Kasih                               "<<endl;
        cout<<"==========================================================================";

        //Perintah untuk keluar dari program
        exit(0);
    }
    else 
    {
        cout<<"Mohon Maaf Pilihan Menu Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;

        //Perintah untuk melompat ke label "kembali" yang telah dideklarasikan di awal
        goto kembali;
    }
    cout<<"=========================================================================="<<endl;
}