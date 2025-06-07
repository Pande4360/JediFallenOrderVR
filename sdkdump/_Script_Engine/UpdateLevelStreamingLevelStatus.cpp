#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UpdateLevelStreamingLevelStatus.hpp"
int32_t& _Script_Engine::UpdateLevelStreamingLevelStatus::get_LODIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::UpdateLevelStreamingLevelStatus::get_PackageName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::UpdateLevelStreamingLevelStatus::set_bNewShouldBeLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::UpdateLevelStreamingLevelStatus::get_bNewShouldBeLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
bool _Script_Engine::UpdateLevelStreamingLevelStatus::get_bNewShouldBeVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 2 != 0;
}
void _Script_Engine::UpdateLevelStreamingLevelStatus::set_bNewShouldBlockOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::UpdateLevelStreamingLevelStatus::set_bNewShouldBeVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::UpdateLevelStreamingLevelStatus::get_bNewShouldBlockOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 4 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::UpdateLevelStreamingLevelStatus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.UpdateLevelStreamingLevelStatus");
    return result;
}
