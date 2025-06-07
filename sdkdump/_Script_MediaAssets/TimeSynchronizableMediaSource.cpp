#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseMediaSource.hpp"
#include "TimeSynchronizableMediaSource.hpp"
bool _Script_MediaAssets::TimeSynchronizableMediaSource::get_bUseTimeSynchronization() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_MediaAssets::TimeSynchronizableMediaSource::set_bUseTimeSynchronization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MediaAssets::TimeSynchronizableMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.TimeSynchronizableMediaSource");
    return result;
}
