#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputDelegateBinding.hpp"
bool _Script_Engine::BlueprintInputDelegateBinding::get_bConsumeInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::BlueprintInputDelegateBinding::set_bOverrideParentBinding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::BlueprintInputDelegateBinding::set_bExecuteWhenPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::BlueprintInputDelegateBinding::set_bConsumeInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BlueprintInputDelegateBinding::get_bExecuteWhenPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
bool _Script_Engine::BlueprintInputDelegateBinding::get_bOverrideParentBinding() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputDelegateBinding");
    return result;
}
