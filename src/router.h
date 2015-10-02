#ifndef __router__
#define __router__

#include <vector>
#include "response.h"
#include "request.h"

class Router {
private:
    std::vector<Response> responses_;
    static Router* instance_;
    Router();

public:
    void Handle(Request& req);
    void AddResponse(Response res);
    static Router* GetInstance();
};

#endif

