#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubTrackGroup.hpp"
void* _Script_Engine::SubTrackGroup::get_GroupName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SubTrackGroup::get_TrackIndices() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::SubTrackGroup::get_bIsCollapsed() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::SubTrackGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SubTrackGroup");
    return result;
}
void _Script_Engine::SubTrackGroup::set_bIsCollapsed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SubTrackGroup::get_bIsSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 2 != 0;
}
void _Script_Engine::SubTrackGroup::set_bIsSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
