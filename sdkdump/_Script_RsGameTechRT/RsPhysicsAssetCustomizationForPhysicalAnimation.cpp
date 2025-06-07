#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicsAssetCustomizationForPhysicalAnimation.hpp"
void* _Script_RsGameTechRT::RsPhysicsAssetCustomizationForPhysicalAnimation::get_BodiesCollision() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicsAssetCustomizationForPhysicalAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicsAssetCustomizationForPhysicalAnimation");
    return result;
}
