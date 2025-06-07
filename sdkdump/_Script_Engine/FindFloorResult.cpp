#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FindFloorResult.hpp"
bool _Script_Engine::FindFloorResult::get_bBlockingHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::FindFloorResult::set_bLineTrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::FindFloorResult::get_bLineTrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Engine::FindFloorResult::set_bBlockingHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::FindFloorResult::get_bWalkableFloor() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::FindFloorResult::set_bWalkableFloor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::FindFloorResult::get_FloorDist() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::FindFloorResult::get_LineDist() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::FindFloorResult::get_HitResult() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::FindFloorResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FindFloorResult");
    return result;
}
