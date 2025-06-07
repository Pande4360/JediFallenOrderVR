#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StatColorMapping.hpp"
void* _Script_Engine::StatColorMapping::get_StatName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::StatColorMapping::get_DisableBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_Engine::StatColorMapping::get_ColorMap() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::StatColorMapping::set_DisableBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::StatColorMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StatColorMapping");
    return result;
}
