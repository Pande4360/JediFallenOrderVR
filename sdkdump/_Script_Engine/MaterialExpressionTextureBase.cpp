#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTextureBase.hpp"
#include "Texture.hpp"
bool _Script_Engine::MaterialExpressionTextureBase::get_IsDefaultMeshpaintTexture() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
_Script_Engine::Texture*& _Script_Engine::MaterialExpressionTextureBase::get_Texture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionTextureBase::get_SamplerType() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::MaterialExpressionTextureBase::set_IsDefaultMeshpaintTexture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureBase");
    return result;
}
