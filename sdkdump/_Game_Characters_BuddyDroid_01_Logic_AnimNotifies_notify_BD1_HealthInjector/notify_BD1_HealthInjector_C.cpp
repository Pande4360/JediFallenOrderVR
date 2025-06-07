#include "..\FUObjectArray.hpp"
#include "notify_BD1_HealthInjector_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_HealthInjector::notify_BD1_HealthInjector_C::get_WarpScale() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_HealthInjector::notify_BD1_HealthInjector_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/AnimNotifies/notify_BD1_HealthInjector.notify_BD1_HealthInjector_C");
    return result;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_HealthInjector::notify_BD1_HealthInjector_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_HealthInjector::notify_BD1_HealthInjector_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
