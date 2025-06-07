#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleLocationPrimitiveTriangle.hpp"
void* _Script_Engine::ParticleModuleLocationPrimitiveTriangle::get_StartOffset() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveTriangle::get_Height() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveTriangle::get_Angle() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveTriangle::get_Thickness() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationPrimitiveTriangle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationPrimitiveTriangle");
    return result;
}
