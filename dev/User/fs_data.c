#include "main.h"
#include "fs_data.h"

const uint8_t responseData[] = ""
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/html\r\n"
"Connection: close\r\n"
"\r\n"
"<html>\n"
"   <head>\n"
"       <meta http-equiv=\"Refresh\" content=\"10\" />\n"
"       <script src=\"https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js\"></script>\n"
"       <script src=\"/js/js1.js\" type=\"text/javascript\"></script>\n"
"       <script src=\"/js/js2.js\" type=\"text/javascript\"></script>\n"
"       <script src=\"/js/js3.js\" type=\"text/javascript\"></script>\n"
"       <script src=\"/js/js4.js\" type=\"text/javascript\"></script>\n"
"       <link rel=\"stylesheet\" type=\"text/css\" href=\"/css/style1.css\">\n"
"   </head>\n"
"   <body>\n"
"       <div id=\"maindiv\">\n"
"           <h1>Welcome to web server produced by ESP8266 Wi-Fi module!</h1>\n"
"           <p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum \n"
"Osem srbskih delavcev je mesec in pol delalo v Nemciji za slovenska podjetnika, a so na koncu ostali brez celotnega placila. Tako trdijo razocarani delavci, medtem ko lastnica podjetja vztraja, da je denar nakazala. To je �e ena od zgodb prevaranih delavcev, ki so prilo�nost za dober zaslu�ek videli v tujini. Delavci so se iz Nemcije v Slovenijo odpravili s kombijem in vsem orodjem. Brez denarja in izcrpani po napornem potovanju so v soboto pri�li po svoje placilo v Rogatec, a jih lastnica podjetja ni �elela sprejeti. Lacnim in premra�enim so na pomoc priskocili domacini, ki so jim podarili hrano in pijaco ter jih brezplacno odpeljali v Zagreb, da so se lahko nato po mesecu in pol dela v Nemciji vrnili domov."
"Sedem delavcev je iz Srbije v Nemcijo odpotovalo 10. septembra (eden se jim je pridru�il v oktobru), kjer so delali na dveh gradbi�cih v nem�kem Geisenfeldu in Weissenburgu. Delavci so tja odpotovali prek podjetja Fercec J iz Pregrade na Hrva�kem, ki je ocitno �e eno od podjetij v lasti zakoncev Alojzije in Ivana Fercec iz Rogatca. Po mesecu in pol fasaderskega dela so dobili navodila, da se vrnejo nazaj v Srbijo, zato so zahtevali za opravljeno delo placilo, a ga niso dobili. Lastnica podjetja, ki jih je napotilo v Nemcijo, jim je obljubila, da se bodo o placilu pogovorili, ko pridejo v Slovenijo, zato so se odpravili na dolgo pot, da bi koncno dobili zaslu�eno placilo. V soboto, 28. oktobra so prispeli v Rogatec, a jih lastnica ni sprejela. �e vec. Trdi, da so bili srbski delavci poplacani, v Rogatcu pa jih je pricakovala v petek in ne v soboto, ko so tja prispeli vsi izmuceni."
"Trdita, da je bilo dogovorjeno, da dobijo delavci najprej akontacijo placila, ko bo projekt zakljucen, pa prejmejo dokoncno placilo. Trdita, da sta delavcem akontacije placila nakazala preko vodje gradbi�ca in enega od osmih delavcev, v primeru delavca Aleksandra Nemova, ki je spregovoril na posnetku, ter �e enega delavca, pa sta akontacijo nakazala njunima sestri in �eni.</p>"
"<h2>Kaj pa preostalo placilo?</h2>"
"<p>Govorili smo z Nemovom, ki je dejal, da ni res, da so dobili celotno placilo. \"To so gnusne la�i,\" pravi in pojasnjuje, da je za mesec in pol dela v Nemciji dobil le okoli 700 evrov, in sicer 400 evrov akontacije in nato �e 300 evrov placila, kar je bistveno manj kot je bilo dogovorjeno. Ves denar, ki ga je nakazalo podjetje, pa ni bil namenjen zgolj placi, �e opozarja, pac pa tudi za nakup orodja, s katerim so delali na dveh gradbi�cih, in potne stro�ke.</p>"
""
"<p>Ferceceva pravi, da je vodji gradbi�ca za vse delavce nakazala 5430 evrov, enemu od delavcev �e 5700 evrov, �eni enega od delavcev 300 evrov ter sestri Nemova 600 evrov. Trdi, da je Nemov od vodje gradbi�ca dobil 300 evrov, od drugega delavca pa 600 evrov, zato vztraja, da njegove trditve niso resnicne. Prav tako trdi, da projekt �e ni zakljucen in koncno placilo zato tudi �e ni dospelo. Vse skupaj sta zakonca Fercec sicer podkrepila z dokazili o placilu, ki pa na racune omenjenih oseb prihajajo iz najmanj treh razlicnih virov, in sicer podjetja Fil Monting (v lasti zakoncev Fercec), z racuna Alojzije Fercec ter racuna podjetja Ivan Fercec s.p..</p>"
""
"           <div>"
"               <a href=\"index.cgi?led=1\"><button>LED On</button></a>"
"               <a href=\"index.cgi?led=0\"><button>LED Off</button></a>\n"
"           </div>\n"
"       </div>\n"
"       <footer>\n"
"           <div id=\"footerdiv\">\n"
"               Copyright &copy; 2017. All rights reserved. Webserver is hosted on ESP8266.\n"
"           </div>\n"
"       </footer>\n"
"   </body>\n"
"</html>\n";

const uint8_t responseData_css[] = ""
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/css\r\n"
"Connection: close\r\n"
"\r\n"
"html, body { margin: 0; padding: 0; color: blue; font-family: Arial, Tahoma; }\r\n"
"h1 { font-size: 22px; }\n"
"#maindiv   { margin: 0 auto; width: 1000px; padding: 10px; border: 1px solid #000000; }\n"
"#footerdiv { margin: 0 auto; width: 1000px; padding: 6px 3px; border: 1px solid #000000; font-size: 11px; }\n"
"footer { position: fixed; bottom: 0; width: 100%; background: brown; color: #DDDDDD; }\n"
"";

const uint8_t responseData_js1[] = ""
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/javascript\r\n"
"Connection: close\r\n"
"\r\n"
"jQuery(document).ready(function() {\n"
"   jQuery('body').css('color', 'red');\n"
"})\n";

const uint8_t responseData_js2[] = ""
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/javascript\r\n"
"Connection: close\r\n"
"\r\n"
"document.write(\"TEST STRING\")";

const uint8_t responseData_404[] = ""
"HTTP/1.1 404 Not Found\r\n"
"Content-Type: text/html\r\n"
"Connection: close\r\n"
"\r\n"
"<html>\n"
"   <head>\n"
"       <meta http-equiv=\"Refresh\" content=\"2; url=/\" />\n"
"       <link rel=\"stylesheet\" type=\"text/css\" href=\"/css/style1.css\">\n"
"   </head>\n"
"   <body>\n"
"       <div id=\"maindiv\">\n"
"           <h1>Page not found!</h1>\n"
"       </div>\n"
"       <footer>\n"
"           <div id=\"footerdiv\">\n"
"               Copyright &copy; 2017. All rights reserved. Webserver is hosted on ESP8266.\n"
"           </div>\n"
"       </footer>\n"
"   </body>\n"
"</html>\n";

/**
 * \brief           List of dummy files for output on user request
 */
const fs_file_t
files[] = {
    {"/index.html",         responseData,       sizeof(responseData) - 1,       0, 1, 1},
    {"/css/style1.css",     responseData_css,   sizeof(responseData_css) - 1,   0, 1, 1},
    {"/css/style2.css",     responseData_css,   sizeof(responseData_css) - 1,   0, 1, 1},
    {"/css/style3.css",     responseData_css,   sizeof(responseData_css) - 1,   0, 1, 1},
    {"/css/style4.css",     responseData_css,   sizeof(responseData_css) - 1,   0, 1, 1},
    {"/js/js1.js",          responseData_js1,   sizeof(responseData_js1) - 1,   0, 1, 1},
    {"/js/js2.js",          responseData_js2,   sizeof(responseData_js2) - 1,   0, 1, 1},
    {"/js/js3.js",          responseData_js1,   sizeof(responseData_js1) - 1,   0, 1, 1},
    {"/js/js4.js",          responseData_js2,   sizeof(responseData_js2) - 1,   0, 1, 1},
    {"404",                 responseData_404,   sizeof(responseData_404) - 1,   1, 1, 1}
};

const fs_file_t*
fs_data_open_file(const char* path, uint8_t is_404) {
    uint8_t i;
    for (i = 0; i < sizeof(files) / sizeof(files[0]); i++) {
        if (
            (is_404 && files[i].is_404) ||
            (!is_404 && path && !strcmp(files[i].path, path))
        ) {
            return &files[i];
        }
    }
    return NULL;
}

void
fs_data_close_file(const fs_file_t* file) {

}
