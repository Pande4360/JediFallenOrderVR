#include "..\FUObjectArray.hpp"
#include "INT_UseTraceCollision_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_UseTraceCollision::INT_UseTraceCollision_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_UseTraceCollision.INT_UseTraceCollision_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_UseTraceCollision::INT_UseTraceCollision_C::UseTraceCollision() {
    return;
}
