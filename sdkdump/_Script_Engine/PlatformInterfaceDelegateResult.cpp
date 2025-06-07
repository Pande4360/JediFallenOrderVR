#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlatformInterfaceDelegateResult.hpp"
bool _Script_Engine::PlatformInterfaceDelegateResult::get_bSuccessful() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_Engine::PlatformInterfaceDelegateResult::get_Data() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_Engine::PlatformInterfaceDelegateResult::set_bSuccessful(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PlatformInterfaceDelegateResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PlatformInterfaceDelegateResult");
    return result;
}
