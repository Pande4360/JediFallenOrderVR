#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ColorGradingSettings.hpp"
void* _Script_Engine::ColorGradingSettings::get_Highlights() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::ColorGradingSettings::get_Global() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ColorGradingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ColorGradingSettings");
    return result;
}
void* _Script_Engine::ColorGradingSettings::get_Shadows() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::ColorGradingSettings::get_Midtones() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::ColorGradingSettings::get_ShadowsMax() {
    return *(float*)((uintptr_t)this + 0x140);
}
float& _Script_Engine::ColorGradingSettings::get_HighlightsMin() {
    return *(float*)((uintptr_t)this + 0x144);
}
