#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldRegion.hpp"
void* _Script_Engine::RsWorldRegion::get_RegionName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsWorldRegion::get_MapSections() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsWorldRegion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsWorldRegion");
    return result;
}
