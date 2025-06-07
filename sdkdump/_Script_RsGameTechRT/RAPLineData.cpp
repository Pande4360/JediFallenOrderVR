#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RAPLineData.hpp"
void* _Script_RsGameTechRT::RAPLineData::get_Choice() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RAPLineData::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RAPLineData::get_bIsRadio() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RAPLineData::get_UID() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RAPLineData::get_WwiseEventName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RAPLineData::get_Description() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RAPLineData::get_Text() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RAPLineData::get_ChoicePrompt() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_RsGameTechRT::RAPLineData::set_bIsRadio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RAPLineData::get_bCritPath() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RAPLineData::set_bCritPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RAPLineData::get_bNotSpatialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x7e + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RAPLineData::set_bNotSpatialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7e + 0);
    *(uint8_t*)((uintptr_t)this + 0x7e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RAPLineData::get_FacialAnim() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPLineData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RAPLineData");
    return result;
}
