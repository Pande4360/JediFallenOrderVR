#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelViewportInfo.hpp"
void _Script_Engine::LevelViewportInfo::set_CamUpdated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::LevelViewportInfo::get_CamPosition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LevelViewportInfo::get_CamRotation() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::LevelViewportInfo::get_CamOrthoZoom() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::LevelViewportInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LevelViewportInfo");
    return result;
}
bool _Script_Engine::LevelViewportInfo::get_CamUpdated() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
