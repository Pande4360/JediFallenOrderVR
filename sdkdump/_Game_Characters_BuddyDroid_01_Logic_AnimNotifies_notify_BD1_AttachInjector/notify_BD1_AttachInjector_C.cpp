#include "..\FUObjectArray.hpp"
#include "notify_BD1_AttachInjector_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_AttachInjector::notify_BD1_AttachInjector_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/AnimNotifies/notify_BD1_AttachInjector.notify_BD1_AttachInjector_C");
    return result;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_AttachInjector::notify_BD1_AttachInjector_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_AttachInjector::notify_BD1_AttachInjector_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
