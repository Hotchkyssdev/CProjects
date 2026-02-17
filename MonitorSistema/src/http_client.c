#include <stdio.h>
#include <curl/curl.h>
#include "logger.h"

void make_request(const char *url) {
    CURL *curl = curl_easy_init();

    if (!curl)
    {
        log_info("Error inicializando CURL");
        return;
    }

    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_NOBODY, 1L); /* Solo HEAD request */

    CURLcode res = curl_easy_perform(curl);

    if (res != CURLE_OK)
        log_info("Error en request");
    else
        log_info("Request realizada correctamente");

    curl_easy_cleanup(curl);
}