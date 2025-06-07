#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DecalTrailPoint.hpp"
void* _Script_Engine::DecalTrailPoint::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::DecalTrailPoint::get_Time() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::DecalTrailPoint::get_Direction() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::DecalTrailPoint::get_Side() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::DecalTrailPoint::get_Normal() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Engine::DecalTrailPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DecalTrailPoint");
    return result;
}
