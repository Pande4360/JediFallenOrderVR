#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMapSectionInteriorLevel.hpp"
bool _Script_Engine::RsMapSectionInteriorLevel::get_bIsScreteArea() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_Engine::RsMapSectionInteriorLevel::get_InteriorLevel() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RsMapSectionInteriorLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsMapSectionInteriorLevel");
    return result;
}
void _Script_Engine::RsMapSectionInteriorLevel::set_bIsScreteArea(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsMapSectionInteriorLevel::get_bIsInitiallyExplored() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_Engine::RsMapSectionInteriorLevel::set_bIsInitiallyExplored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
