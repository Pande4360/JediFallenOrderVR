#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LensBloomSettings.hpp"
void* _Script_Engine::LensBloomSettings::get_GaussianSum() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LensBloomSettings::get_Convolution() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::LensBloomSettings::get_Method() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_Engine::LensBloomSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LensBloomSettings");
    return result;
}
