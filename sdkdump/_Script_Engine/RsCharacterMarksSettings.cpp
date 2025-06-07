#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsCharacterMarksSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsCharacterMarksSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsCharacterMarksSettings");
    return result;
}
void* _Script_Engine::RsCharacterMarksSettings::get_RenderTargetSize() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::RsCharacterMarksSettings::get_MaxMarksRenderTargets() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::RsCharacterMarksSettings::get_FadeTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::RsCharacterMarksSettings::get_MinFadeValue() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::RsCharacterMarksSettings::get_RainFadeScale() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::RsCharacterMarksSettings::get_MinOffScreenTime() {
    return *(float*)((uintptr_t)this + 0x4c);
}
