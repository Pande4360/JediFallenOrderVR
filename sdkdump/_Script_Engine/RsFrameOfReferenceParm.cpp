#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsFrameOfReferenceParm.hpp"
void* _Script_Engine::RsFrameOfReferenceParm::get_PositionTransference() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::RsFrameOfReferenceParm::set_KeepActiveGradual(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsFrameOfReferenceParm::get_KeepActiveGradual() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::RsFrameOfReferenceParm::get_PositionTransferenceThreshold() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RsFrameOfReferenceParm::get_KeepActiveTimeOut() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::RsFrameOfReferenceParm::get_RotationAxisTarget() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::RsFrameOfReferenceParm::get_RotationTransference() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::RsFrameOfReferenceParm::get_RotationAxis() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::RsFrameOfReferenceParm::get_UseElevatorCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_Engine::RsFrameOfReferenceParm::set_UseElevatorCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::RsFrameOfReferenceParm::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsFrameOfReferenceParm");
    return result;
}
