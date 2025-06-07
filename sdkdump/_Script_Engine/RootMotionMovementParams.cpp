#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RootMotionMovementParams.hpp"
void _Script_Engine::RootMotionMovementParams::set_bHasRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RootMotionMovementParams::get_bHasRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_Engine::RootMotionMovementParams::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::RootMotionMovementParams::get_RootMotionTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionMovementParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionMovementParams");
    return result;
}
