#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMakeMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Roughness() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Specular() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_BaseColor() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Metallic() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Opacity() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_OpacityMask() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Normal() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_WorldPositionOffset() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_WorldDisplacement() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_TessellationMultiplier() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ClearCoat() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ClearCoatRoughness() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_AmbientOcclusion() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Refraction() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_CustomizedUVs() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_PixelDepthOffset() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_GroundBlendFactor() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMakeMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMakeMaterialAttributes");
    return result;
}
