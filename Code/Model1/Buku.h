/**
 * Project Untitled
 */


#ifndef _BUKU_H
#define _BUKU_H

class Buku {
public: 
    
/**
 * @param string judul
 * @param string penulis
 * @param int harga
 * @param string genre
 */
void Buku(void string judul, void string penulis, void int harga, void string genre);
    
void setJudul();
    
void setPenulis();
    
void setHarga();
    
void setGenre();
private: 
    string Judul;
    string Penulis;
    int Harga;
    string Genre;
};

#endif //_BUKU_H