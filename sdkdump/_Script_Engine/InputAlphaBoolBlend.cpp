#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "InputAlphaBoolBlend.hpp"
void* _Script_Engine::InputAlphaBoolBlend::get_BlendOption() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::InputAlphaBoolBlend::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::InputAlphaBoolBlend::get_AlphaBlend() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::InputAlphaBoolBlend::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Engine::InputAlphaBoolBlend::get_bInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_Engine::InputAlphaBoolBlend::set_bInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Script_Engine::InputAlphaBoolBlend::get_CustomCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::InputAlphaBoolBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputAlphaBoolBlend");
    return result;
}
