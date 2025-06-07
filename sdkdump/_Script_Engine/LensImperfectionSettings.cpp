#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LensImperfectionSettings.hpp"
#include "Texture.hpp"
_Script_Engine::Texture*& _Script_Engine::LensImperfectionSettings::get_DirtMask() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::LensImperfectionSettings::get_DirtMaskIntensity() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::LensImperfectionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LensImperfectionSettings");
    return result;
}
void* _Script_Engine::LensImperfectionSettings::get_DirtMaskTint() {
    return (void*)((uintptr_t)this + 0xc);
}
