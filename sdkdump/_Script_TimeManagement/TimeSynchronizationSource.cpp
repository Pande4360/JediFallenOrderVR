#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TimeSynchronizationSource.hpp"
int32_t& _Script_TimeManagement::TimeSynchronizationSource::get_FrameOffset() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
bool _Script_TimeManagement::TimeSynchronizationSource::get_bUseForSynchronization() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_TimeManagement::TimeSynchronizationSource::set_bUseForSynchronization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_TimeManagement::TimeSynchronizationSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TimeManagement.TimeSynchronizationSource");
    return result;
}
