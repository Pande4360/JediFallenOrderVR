#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ViewTargetTransitionParams.hpp"
float& _Script_Engine::ViewTargetTransitionParams::get_BlendTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ViewTargetTransitionParams::get_BlendFunction() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ViewTargetTransitionParams::get_BlendExp() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::ViewTargetTransitionParams::get_bLockOutgoing() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Engine::ViewTargetTransitionParams::set_bLockOutgoing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ViewTargetTransitionParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ViewTargetTransitionParams");
    return result;
}
