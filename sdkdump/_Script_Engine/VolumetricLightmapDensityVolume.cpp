#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Volume.hpp"
#include "VolumetricLightmapDensityVolume.hpp"
void* _Script_Engine::VolumetricLightmapDensityVolume::get_AllowedMipLevelRange() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_Engine::VolumetricLightmapDensityVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VolumetricLightmapDensityVolume");
    return result;
}
