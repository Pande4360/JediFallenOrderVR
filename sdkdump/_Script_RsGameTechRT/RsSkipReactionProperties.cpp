#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSkipReactionProperties.hpp"
void _Script_RsGameTechRT::RsSkipReactionProperties::set_bAllowReactionOnUnblockable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsSkipReactionProperties::get_bAllowReactionOnForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSkipReactionProperties::set_bAllowReactionOnForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSkipReactionProperties::set_bAllowReactionOnBlockBreak(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsSkipReactionProperties::get_bAllowReactionOnBlockBreak() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsSkipReactionProperties::get_bSkipOnParryReactions() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsSkipReactionProperties::set_bSkipOnParryReactions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsSkipReactionProperties::get_bAllowReactionOnUnblockable() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 4 != 0;
}
void* _Script_RsGameTechRT::RsSkipReactionProperties::get_ExcludedDamageClasses() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSkipReactionProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSkipReactionProperties");
    return result;
}
