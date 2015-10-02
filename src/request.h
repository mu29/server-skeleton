#ifndef __request__
#define __request__

#include "../lib/lightjson/lightjson.h"
#include "../lib/string/split.h"

#include <string>
#include <string.h>
#include <stdlib.h>
#include <fcgi_stdio.h>

class Request {
private:
    std::string route_;
    std::string method_;
    Json::Object parameter_;
    Json::Object body_;

public:
    Request();
    std::string GetRoute();
    std::string GetMethod();
    Json::Object& GetParameter();
    Json::Object GetBody();
};

#endif

