#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleMaterialBase.hpp"
#include "ParticleModuleMeshMaterial.hpp"
void* _Script_Engine::ParticleModuleMeshMaterial::get_MeshMaterials() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleMeshMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleMeshMaterial");
    return result;
}
