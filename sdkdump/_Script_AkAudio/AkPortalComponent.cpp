#include "..\FUObjectArray.hpp"
#include "AkPortalComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkPortalComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkPortalComponent");
    return result;
}
