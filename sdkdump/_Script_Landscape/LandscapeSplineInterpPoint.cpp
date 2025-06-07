#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeSplineInterpPoint.hpp"
float& _Script_Landscape::LandscapeSplineInterpPoint::get_StartEndFalloff() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_Center() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_Left() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_Right() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_FalloffLeft() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_FalloffRight() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineInterpPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeSplineInterpPoint");
    return result;
}
