#include "..\FUObjectArray.hpp"
#include "RBFEntry.hpp"
#include "RBFTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AnimGraphRuntime::RBFTarget::set_bApplyCustomCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::RBFTarget::get_ScaleFactor() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::RBFTarget::get_CustomCurve() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_AnimGraphRuntime::RBFTarget::get_bApplyCustomCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::RBFTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.RBFTarget");
    return result;
}
