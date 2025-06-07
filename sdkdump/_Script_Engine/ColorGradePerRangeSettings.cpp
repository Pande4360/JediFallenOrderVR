#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ColorGradePerRangeSettings.hpp"
void* _Script_Engine::ColorGradePerRangeSettings::get_Saturation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ColorGradePerRangeSettings::get_Contrast() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ColorGradePerRangeSettings::get_Gain() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ColorGradePerRangeSettings::get_Gamma() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::ColorGradePerRangeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ColorGradePerRangeSettings");
    return result;
}
void* _Script_Engine::ColorGradePerRangeSettings::get_Offset() {
    return (void*)((uintptr_t)this + 0x40);
}
