#include <iostream>

using namespace std;

struct Node{
    string Ikan;
    int jmlh;
    Node *next;
};

void tambahDepan(Node **head, string Ikan, int jmlh){
    Node *newNode = new Node();
    newNode->Ikan = Ikan;
    newNode->jmlh = jmlh;
    newNode->next = *head;
    *head = newNode;
}

void tambahBelakang(Node **head, string Ikan, int jmlh){
    Node *newNode = new Node();
    newNode->Ikan = Ikan;
    newNode->jmlh = jmlh;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    Node *now = *head;
    while(now->next != NULL){
        now = now->next;
    }
    now->next = newNode;
}

void tampil(Node *head){
    Node *now = head;
    while (now != NULL){
        cout << "Jenis Ikan: " << now->Ikan << "\nJumlah: " << now->jmlh << "\n " << endl;
        now = now->next;
    }
}

int hitungJmlh(Node *head, string Ikan){
    Node *now = head;
    int total = 0;
    while (now != NULL){
        if(now->Ikan == Ikan){
            total += now->jmlh;
        }
        now = now->next;
    }
    return total;
}



int main()
{
//    cout << endl;
//    init();

    Node* head = nullptr;
    int jmlh;
    string namaIkan;
    string cariIkan;
    char pilihan;

    do {
        cout << "Masukkan Nama Ikan: ";
        getline(cin, namaIkan);
        cout << "Masukkan Jumlah   : ";
        cin >> jmlh;

        cin.ignore();

        tambahDepan(&head, namaIkan, jmlh);

        cout << "Tambah Jumlah lagi? (y/n): ";
        cin >> pilihan;

        cin.ignore();
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Masukan Nama Ikan Yang Ingin Dijumlah: ";
    cin >> cariIkan;
    int total = hitungJmlh(head, namaIkan);
    cout << "Hasil: " << total;

    return 0;
}
