#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsDynamicMontageData.hpp"
void* _Script_SwGame::RsDynamicMontageData::get_BlendSpaceInput() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::RsDynamicMontageData::get_AnimationAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::RsDynamicMontageData::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_SwGame::RsDynamicMontageData::get_SlotName() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::RsDynamicMontageData::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::RsDynamicMontageData::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::RsDynamicMontageData::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_SwGame::RsDynamicMontageData::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
float& _Script_SwGame::RsDynamicMontageData::get_BlendOutTriggerTime() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_SwGame::RsDynamicMontageData::get_TimeToStartMontageAt() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::RsDynamicMontageData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsDynamicMontageData");
    return result;
}
