#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsPhysicsAssetCustomization.hpp"
void* _Script_RsGameTechRT::RsPhysicsAssetCustomization::get_PhysicalAnimationCustomization() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsPhysicsAssetCustomization::get_RagdollCustomization() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicsAssetCustomization::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPhysicsAssetCustomization");
    return result;
}
