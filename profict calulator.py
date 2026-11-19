print("=== KALKULATOR TOKO ===")
print("1. Untung Bersih (-)")
print("2. Total Borongan (*)")
print("3. Persen (%)")

pilih = input("Pilih: ")

if pilih == "1":
    uang_masuk = int(input("Uang Masuk: "))
    modal = int(input("Modal barang: "))
    biaya = int(input("Biaya toko: "))

    hasil = uang_masuk - modal - biaya
    print("Untung bersih:", hasil)

elif pilih == "2":
    harga = int(input("Harga satuan: "))
    jumlah = int(input("Jumlah barang: "))

    hasil = harga * jumlah
    print("Total harga:", hasil)

elif pilih == "3":
    harga = int(input("Harga: "))
    persen = int(input("Persen: "))

    hasil = harga * persen / 100
    print("Hasil persen:", hasil)

else:
    print("Pilihan tidak tersedia")