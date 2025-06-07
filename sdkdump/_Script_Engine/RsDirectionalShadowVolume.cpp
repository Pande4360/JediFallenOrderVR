#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionalShadowVolume.hpp"
#include "RsDirectionalShadowVolumeComponent.hpp"
#include "Volume.hpp"
_Script_Engine::RsDirectionalShadowVolumeComponent*& _Script_Engine::RsDirectionalShadowVolume::get_DirectionalShadowVolumeComponent() {
    return *(_Script_Engine::RsDirectionalShadowVolumeComponent**)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_Engine::RsDirectionalShadowVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsDirectionalShadowVolume");
    return result;
}
