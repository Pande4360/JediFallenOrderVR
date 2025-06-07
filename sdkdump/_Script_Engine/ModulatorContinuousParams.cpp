#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ModulatorContinuousParams.hpp"
void* _Script_Engine::ModulatorContinuousParams::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ModulatorContinuousParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ModulatorContinuousParams");
    return result;
}
float& _Script_Engine::ModulatorContinuousParams::get_MinInput() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::ModulatorContinuousParams::get_Default() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::ModulatorContinuousParams::get_MinOutput() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::ModulatorContinuousParams::get_MaxInput() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::ModulatorContinuousParams::get_MaxOutput() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ModulatorContinuousParams::get_ParamMode() {
    return (void*)((uintptr_t)this + 0x1c);
}
