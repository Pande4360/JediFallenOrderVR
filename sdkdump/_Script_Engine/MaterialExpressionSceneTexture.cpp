#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSceneTexture.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSceneTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSceneTexture");
    return result;
}
bool _Script_Engine::MaterialExpressionSceneTexture::get_bFiltered() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialExpressionSceneTexture::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSceneTexture::get_SceneTextureId() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::MaterialExpressionSceneTexture::set_bFiltered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
