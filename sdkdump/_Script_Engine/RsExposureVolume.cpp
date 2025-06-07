#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "RsExposureVolume.hpp"
#include "RsExposureVolumeComponent.hpp"
_Script_Engine::RsExposureVolumeComponent*& _Script_Engine::RsExposureVolume::get_ExposureVolumeComponent() {
    return *(_Script_Engine::RsExposureVolumeComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::RsExposureVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsExposureVolume");
    return result;
}
