#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDepthFade.hpp"
void* _Script_Engine::MaterialExpressionDepthFade::get_InOpacity() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionDepthFade::get_FadeDistance() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::MaterialExpressionDepthFade::get_OpacityDefault() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::MaterialExpressionDepthFade::get_FadeDistanceDefault() {
    return *(float*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDepthFade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDepthFade");
    return result;
}
