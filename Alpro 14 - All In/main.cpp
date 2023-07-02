#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string name;
    double price;
    Product* next;

    Product(string name, double price) : name(name), price(price), next(nullptr) {}
};

class ShoppingCart {
public:
    Product* head;

    ShoppingCart() : head(nullptr) {}

    void addProductRecursive(Product* current, string name, double price) {
        if (current->next != nullptr) {
            addProductRecursive(current->next, name, price);
        } else {
            current->next = new Product(name, price);
        }
    }

    void addProduct(string name, double price) {
        if (head == nullptr) {
            head = new Product(name, price);
        } else {
            addProductRecursive(head, name, price);
        }
    }

    void removeProductRecursive(Product* current, string name) {
        if (current == nullptr) {
            cout << "Produk tidak ditemukan dalam keranjang belanja." << endl;
            return;
        }

        if (current->name == name) {
            Product* temp = current->next;
            delete current;
            current = temp;
            return;
        }

        removeProductRecursive(current->next, name);
    }

    void removeProduct(string name) {
        if (head == nullptr) {
            cout << "Keranjang belanja kosong." << endl;
        } else {
            if (head->name == name) {
                Product* temp = head->next;
                delete head;
                head = temp;
            } else {
                removeProductRecursive(head->next, name);
            }
        }
    }

    void displayCartRecursive(Product* current) {
        if (current == nullptr) {
            return;
        }

        cout << current->name << " - Rp" << current->price << endl;
        displayCartRecursive(current->next);
    }

    void displayCart() {
        if (head == nullptr) {
            cout << "Keranjang belanja kosong." << endl;
        } else {
            displayCartRecursive(head);
        }
    }
};

int main() {
    ShoppingCart cart;

    while (true) {
        cout << "=== Supermarket Menu ===" << endl;
        cout << "1. Tambahkan Produk ke Keranjang Belanja" << endl;
        cout << "2. Hapus Produk dari Keranjang Belanja" << endl;
        cout << "3. Tampilkan Isi Keranjang Belanja" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan Anda: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                double price;
                cout << "Masukkan nama produk: ";
                cin.ignore(); // Membersihkan newline dari buffer
                getline(cin, name);
                cout << "Masukkan harga produk: ";
                cin >> price;
                cart.addProduct(name, price);
                cout << "Produk berhasil ditambahkan ke keranjang belanja." << endl;
                break;
            }
            case 2: {
                string name;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin.ignore();
                getline(cin, name);
                cart.removeProduct(name);
                break;
            }
            case 3: {
                cout << "Isi Keranjang Belanja:" << endl;
                cart.displayCart();
                break;
            }
            case 4: {
                cout << "Terima kasih telah berbelanja di Supermarket.\nSemoga Hari Anda Menyenangkan" << endl;
                return 0;
            }
            default:
                cout << "Pilihan tidak valid.\nSilakan coba lagi." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
