#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DebugFloatHistory.hpp"
void _Script_Engine::DebugFloatHistory::set_bAutoAdjustMinMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DebugFloatHistory::get_Samples() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::DebugFloatHistory::get_MaxSamples() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::DebugFloatHistory::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::DebugFloatHistory::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::DebugFloatHistory::get_bAutoAdjustMinMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::DebugFloatHistory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DebugFloatHistory");
    return result;
}
