let pilihan = Number(prompt(
        "Masukkan pilihan anda (1-4): 1. Menghitung luas persegi panjang 2. Menghitung luas lingkaran 3. menghitung volume kubus 4. keluar"));

    switch (pilihan) {
        case 1:
            let panjang = parseFloat(prompt("Masukkan panjang persegi panjang:"));
            let lebar = parseFloat(prompt("Masukkan lebar persegi panjang:"));
            luas1 = panjang * lebar
            window.alert(`Luas persegi panjang: ${luas1}`)
            break;
        case 2:
            let jariJari = parseFloat(prompt("Masukkan jari-jari lingkaran:"));
            luas2 = 3.14 * (jariJari**2)
            window.alert(`Luas lingkaran adalah: ${luas2}`)
            break;
        case 3:
            let sisi = parseFloat(prompt("Masukkan sisi kubus:"));
            vol = sisi * sisi * sisi
            window.alert(`Volume kubus adalah: ${vol}`)
            break;
        case 4:
            window.alert("Terima kasih telah menggunakan program ini!");
            break;
        default:
            window.alert("Pilihan tidak valid!");
            break;
    }
