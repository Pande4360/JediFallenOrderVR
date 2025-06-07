#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_RsIkLockBone.hpp"
#include "RsIKCharacterDefinition.hpp"
void* _Script_RsGameTechRT::RsAnimNotifyState_RsIkLockBone::get_Modifiers() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsAnimNotifyState_RsIkLockBone::get_IkBoneToLock() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_RsGameTechRT::RsIKCharacterDefinition*& _Script_RsGameTechRT::RsAnimNotifyState_RsIkLockBone::get_IkDefinition() {
    return *(_Script_RsGameTechRT::RsIKCharacterDefinition**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_RsIkLockBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_RsIkLockBone");
    return result;
}
