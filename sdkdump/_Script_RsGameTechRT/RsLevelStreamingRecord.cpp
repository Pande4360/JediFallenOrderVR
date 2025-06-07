#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsLevelStreamingRecord.hpp"
void* _Script_RsGameTechRT::RsLevelStreamingRecord::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_RsGameTechRT::RsLevelStreamingRecord::set_bShouldBeVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsLevelStreamingRecord::get_bShouldBeLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsLevelStreamingRecord::set_bShouldBeLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsLevelStreamingRecord::get_bShouldBeVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsLevelStreamingRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsLevelStreamingRecord");
    return result;
}
