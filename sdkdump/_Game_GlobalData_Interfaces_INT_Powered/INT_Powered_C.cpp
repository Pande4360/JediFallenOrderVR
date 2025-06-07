#include "..\FUObjectArray.hpp"
#include "INT_Powered_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_Powered::INT_Powered_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_Powered.INT_Powered_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_Powered::INT_Powered_C::PoweredOff(bool BeginPlay) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Powered::INT_Powered_C::PoweredOn(bool BeginPlay) {
    return;
}
