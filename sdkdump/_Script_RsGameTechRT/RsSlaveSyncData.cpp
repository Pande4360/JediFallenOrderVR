#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSlaveSyncData.hpp"
#include "RsSyncData.hpp"
bool _Script_RsGameTechRT::RsSlaveSyncData::get_MaintainRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSlaveSyncData::set_PutInReactionState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSlaveSyncData::set_MaintainRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSlaveSyncData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSlaveSyncData");
    return result;
}
bool _Script_RsGameTechRT::RsSlaveSyncData::get_PutInReactionState() {
    return (*(uint8_t*)((uintptr_t)this + 0xf9 + 0)) & 1 != 0;
}
