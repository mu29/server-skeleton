#ifndef __response__
#define __response__

#include "../lib/lightjson/lightjson.h"
#include "../lib/string/split.h"

#include <vector>
#include <string>
#include "request.h"

class Response {
private:
    std::string route_;
    std::string method_;
    void(*handler_)(Request);

public:
    Response(std::string route, std::string method, void(*handler)(Request));
    std::string GetRoute();
    bool IsMatch(Request&);
    void Execute(Request);
};

#endif

