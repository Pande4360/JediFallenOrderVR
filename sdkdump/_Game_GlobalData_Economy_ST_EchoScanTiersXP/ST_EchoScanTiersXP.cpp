#include "..\FUObjectArray.hpp"
#include "ST_EchoScanTiersXP.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_GlobalData_Economy_ST_EchoScanTiersXP::ST_EchoScanTiersXP::get_Experience_4_0E142357481D2606CEAE258317D08E0A() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_GlobalData_Economy_ST_EchoScanTiersXP::ST_EchoScanTiersXP::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Economy/ST_EchoScanTiersXP.ST_EchoScanTiersXP");
    return result;
}
