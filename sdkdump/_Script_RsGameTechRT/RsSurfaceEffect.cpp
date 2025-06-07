#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsSurfaceEffect.hpp"
float& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalFadeDuration() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_DecalOffset() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_DecalMaterial() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalRandomSizeMax() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_Engine::MaterialInterface*& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalMaterialPtr() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalSize() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalRandomRotationMax() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalFadeStartDelay() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsSurfaceEffect::get_DecalRampUpTime() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_ParticleEffect() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_Engine::ParticleSystem*& _Script_RsGameTechRT::RsSurfaceEffect::get_ParticleEffectPtr() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x88);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_ParticleOffset() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_DynamicDeformer() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_DynamicDeformerPtr() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_RsGameTechRT::RsSurfaceEffect::get_DynamicDeformerOffset() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSurfaceEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSurfaceEffect");
    return result;
}
