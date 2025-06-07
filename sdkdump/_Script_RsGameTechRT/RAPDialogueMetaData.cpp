#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RAPDialogueMetaData.hpp"
void _Script_RsGameTechRT::RAPDialogueMetaData::set_bCritPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RAPDialogueMetaData::get_bCritPath() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RAPDialogueMetaData::get_ChoiceMapping() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPDialogueMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RAPDialogueMetaData");
    return result;
}
void* _Script_RsGameTechRT::RAPDialogueMetaData::get_PlayedTag() {
    return (void*)((uintptr_t)this + 0x58);
}
