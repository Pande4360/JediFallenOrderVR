#include "..\FUObjectArray.hpp"
#include "notify_BD1_BackpanelLightOverride_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::get_MaterialEmissiveColor() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::get_MaterialEmissiveBrightness() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::get_MaterialAnimationSpeed() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::get_LightColor() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::get_LightIntensity() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/AnimNotifies/notify_BD1_BackpanelLightOverride.notify_BD1_BackpanelLightOverride_C");
    return result;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride::notify_BD1_BackpanelLightOverride_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
