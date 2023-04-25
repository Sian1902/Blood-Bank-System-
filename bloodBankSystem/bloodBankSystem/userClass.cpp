#include "userClass.h"

userClass::userClass() : age(0), gender(Gender::MALE), bloodType(bloodType::O_POSITIVE), name(0), password(0)
{
    memset(id, 0, sizeof(id));
}