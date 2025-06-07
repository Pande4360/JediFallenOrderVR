#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpLookupPoint.hpp"
void* _Script_Engine::InterpLookupPoint::get_GroupName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::InterpLookupPoint::get_Time() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::InterpLookupPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InterpLookupPoint");
    return result;
}
