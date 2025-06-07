#include "..\FUObjectArray.hpp"
#include "BoneSocketTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimGraphRuntime::BoneSocketTarget::get_bUseSocket() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::BoneSocketTarget::set_bUseSocket(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::BoneSocketTarget::get_BoneReference() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_AnimGraphRuntime::BoneSocketTarget::get_SocketReference() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::BoneSocketTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.BoneSocketTarget");
    return result;
}
