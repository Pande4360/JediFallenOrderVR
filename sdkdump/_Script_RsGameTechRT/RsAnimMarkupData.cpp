#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsAnimMarkupData.hpp"
void _Script_RsGameTechRT::RsAnimMarkupData::set_bProgressionHalfway(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAnimMarkupData::get_EndPoseDirectionality() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAnimMarkupData::get_CombatSuctionOffset() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_RsGameTechRT::RsAnimMarkupData::get_bShouldCrouch() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAnimMarkupData::set_bShouldCrouch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAnimMarkupData::get_bProgressionHalfway() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimMarkupData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAnimMarkupData");
    return result;
}
