#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSceneColor.hpp"
void* _Script_Engine::MaterialExpressionSceneColor::get_ConstInput() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::MaterialExpressionSceneColor::get_InputMode() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSceneColor::get_Input() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MaterialExpressionSceneColor::get_OffsetFraction() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSceneColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSceneColor");
    return result;
}
