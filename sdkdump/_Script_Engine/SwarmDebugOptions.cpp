#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwarmDebugOptions.hpp"
bool _Script_Engine::SwarmDebugOptions::get_bForceContentExport() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
bool _Script_Engine::SwarmDebugOptions::get_bDistributionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::SwarmDebugOptions::set_bDistributionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SwarmDebugOptions::set_bForceContentExport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SwarmDebugOptions::get_bInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Engine::SwarmDebugOptions::set_bInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SwarmDebugOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SwarmDebugOptions");
    return result;
}
