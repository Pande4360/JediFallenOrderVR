#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InterpCurveEdSetup.hpp"
#include "InterpData.hpp"
#include "InterpGroupDirector.hpp"
float& _Script_Engine::InterpData::get_EdSectionEnd() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::InterpData::get_InterpLength() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::InterpData::get_PathBuildTime() {
    return *(float*)((uintptr_t)this + 0x2c);
}
bool _Script_Engine::InterpData::get_bShouldBakeAndPrune() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_Engine::InterpData::get_InterpGroups() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Engine::InterpCurveEdSetup*& _Script_Engine::InterpData::get_CurveEdSetup() {
    return *(_Script_Engine::InterpCurveEdSetup**)((uintptr_t)this + 0x40);
}
float& _Script_Engine::InterpData::get_EdSectionStart() {
    return *(float*)((uintptr_t)this + 0x48);
}
void _Script_Engine::InterpData::set_bShouldBakeAndPrune(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::InterpGroupDirector*& _Script_Engine::InterpData::get_CachedDirectorGroup() {
    return *(_Script_Engine::InterpGroupDirector**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::InterpData::get_AllEventNames() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::InterpData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpData");
    return result;
}
