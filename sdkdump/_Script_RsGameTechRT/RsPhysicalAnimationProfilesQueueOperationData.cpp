#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationProfilesQueueOperationData.hpp"
void* _Script_RsGameTechRT::RsPhysicalAnimationProfilesQueueOperationData::get_m_SkeletalMeshComponent() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationProfilesQueueOperationData::get_m_PhysicalAnimationParameters() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationProfilesQueueOperationData::get_m_OperationParameters() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationProfilesQueueOperationData::get_m_Operation() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationProfilesQueueOperationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationProfilesQueueOperationData");
    return result;
}
