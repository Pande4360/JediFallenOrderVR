#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsExposureVolumeComponent.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::RsExposureVolumeComponent::get_ExposureOffset() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::RsExposureVolumeComponent::get_VolumeRadius() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Script_Engine::RsExposureVolumeComponent::get_FadeStart() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Script_Engine::RsExposureVolumeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsExposureVolumeComponent");
    return result;
}
