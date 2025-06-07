#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoneFilter.hpp"
_Script_CoreUObject::Class* _Script_Engine::BoneFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BoneFilter");
    return result;
}
bool _Script_Engine::BoneFilter::get_bExcludeSelf() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::BoneFilter::set_bExcludeSelf(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BoneFilter::get_BoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
