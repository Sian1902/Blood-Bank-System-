
#include "handler.h"

handler::handler()
{

}

handler::~handler(){
    BloodBankClass::bbc->writeData();
}
