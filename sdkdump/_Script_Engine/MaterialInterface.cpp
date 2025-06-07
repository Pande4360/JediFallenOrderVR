#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Material.hpp"
#include "MaterialInterface.hpp"
#include "PhysicalMaterial.hpp"
#include "SubsurfaceProfile.hpp"
_Script_Engine::SubsurfaceProfile*& _Script_Engine::MaterialInterface::get_SubsurfaceProfile() {
    return *(_Script_Engine::SubsurfaceProfile**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInterface");
    return result;
}
void* _Script_Engine::MaterialInterface::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MaterialInterface::get_TextureStreamingData() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialInterface::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_Engine::MaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups) {
    return;
}
_Script_Engine::PhysicalMaterial* _Script_Engine::MaterialInterface::GetPhysicalMaterial() {
    return;
}
_Script_Engine::Material* _Script_Engine::MaterialInterface::GetBaseMaterial() {
    return;
}
