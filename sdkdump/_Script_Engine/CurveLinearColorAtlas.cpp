#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveLinearColor.hpp"
#include "CurveLinearColorAtlas.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::CurveLinearColorAtlas::get_TextureSize() {
    return (void*)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::CurveLinearColorAtlas::GetCurvePosition(_Script_Engine::CurveLinearColor* InCurve, float& Position) {
    return;
}
void* _Script_Engine::CurveLinearColorAtlas::get_GradientPixelSize() {
    return (void*)((uintptr_t)this + 0xec);
}
void* _Script_Engine::CurveLinearColorAtlas::get_GradientCurves() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Engine::CurveLinearColorAtlas::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveLinearColorAtlas");
    return result;
}
