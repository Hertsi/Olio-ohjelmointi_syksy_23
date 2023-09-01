# vk1
arpapeli
Laadi ohjelma, joka pyytää pelaajaa arvaamaan arvotun satunnaisen luvun annetulta väliltä 1-n.
 Pelaajaa autetaan kertomalla onko hänen arvauksensa pienempi tai suurempi tai yhtäsuuri kuin etsittävä luku.
 Kun arvaus on yhtäsuuri kuin luku, peli päättyy.
Kirjoita ohjalma main-funktion sisälle ns. pääohjelmaksi.
 Korkein arvattava luku on 20. Ohjelman runko voisi olla jotain seuraavan kaltaista:
Arvotaan satunnainen luku
Kysytään pelaajalta arvaus
Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.

Vinkkejä:
-Tarvittavia muuttujia on siis vähintään 2, etsittävä luku ja palaajan arvaus.
-Satunnaislukugeneraattori löytyy standardikirjastoista cstdlib ja ctime.
 Nämä pitää siis #include-käskyillä tuoda ohjelmaan. Generaattorista tarvitaan funktiot srand(),
 joka alustaa satunnaislukugeneraattorin ja rand(), joka arpoo luvun. 
Arvotun luvun voi rajoittaa halutulle välille esim modulo-operaation=jakojäännös (%) avulla (10%3 = 1)
-Ohjelmaa kirjoitettaessa ja testattaessa on syytä tulostaa cout:lla tietoa ruudulle.
 Kannattanee aloittaa tuon satunnaislukugeneraattorin toiminnan testauksella ja todistaa itselleen, 
että generoitu ja esim modulo operaattorilla rajoitettu luku on välillä 1-20

Tee tehtävän 1 ohjelma oman funktion sisälle niin, että sitä kutsutaan main-funktiosta.
Muuta toteuttamaasi funktiota siten, että funktiolle annetaan parametriksi korkein etsittävä luku, 
josta funktio arpoo satunnaisluvun. Esimerkiksi, jos tämä luku on 40, niin funktio arpoo luvun väliltä 1-40. 
Laske myös montako arvausta pelaajalla meni ja palauta tämä tieto funktiosta paluuarvona. 
Pelin loputtua tulosta arvausten määrä ruudulle main funktiosta paluuarvoa hyödyntäen. 
Käytä funktion nimenä ja prototyyppinä: int game(int maxnum);