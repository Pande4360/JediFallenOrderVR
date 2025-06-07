#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicsAssetCustomizationForRagdoll.hpp"
void* _Script_RsGameTechRT::RsPhysicsAssetCustomizationForRagdoll::get_BonesToDisablePhysicsAndCollisions() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsPhysicsAssetCustomizationForRagdoll::get_KeepTickingPostProcessAnimInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicsAssetCustomizationForRagdoll::set_KeepTickingPostProcessAnimInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicsAssetCustomizationForRagdoll::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicsAssetCustomizationForRagdoll");
    return result;
}
