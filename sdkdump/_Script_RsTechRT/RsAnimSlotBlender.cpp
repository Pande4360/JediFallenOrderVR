#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "RsAnimSlotBlender.hpp"
float& _Script_RsTechRT::RsAnimSlotBlender::get_Progress() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_RsTechRT::RsAnimSlotBlender::get_Poses() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_RsTechRT::RsAnimSlotBlender::get_Driver() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsTechRT::RsAnimSlotBlender::get_TotalRange() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_RsTechRT::RsAnimSlotBlender::get_PoseDeltaRange() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsTechRT::RsAnimSlotBlender::get_PoseDeltaBlendMode() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsTechRT::RsAnimSlotBlender::get_Loop() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimSlotBlender::set_Loop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimSlotBlender::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimSlotBlender");
    return result;
}
