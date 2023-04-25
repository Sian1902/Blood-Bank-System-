#include "UserClass.h"

UserClass::UserClass() : age(0), gender(Gender::MALE), bloodType(BloodType::O_POSITIVE), name(0), password(0)
{
    memset(id, 0, sizeof(id));
}