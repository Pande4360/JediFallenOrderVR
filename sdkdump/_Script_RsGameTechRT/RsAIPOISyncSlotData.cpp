#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsAIPOISyncSlotData.hpp"
void* _Script_RsGameTechRT::RsAIPOISyncSlotData::get_SyncSlotName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPOISyncSlotData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIPOISyncSlotData");
    return result;
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsAIPOISyncSlotData::get_Animation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsAIPOISyncSlotData::get_SyncLocationOffset() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsAIPOISyncSlotData::get_MotionParmName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsAIPOISyncSlotData::get_CharacterTypeFilter() {
    return (void*)((uintptr_t)this + 0x48);
}
