#include "..\FUObjectArray.hpp"
#include "notify_BD1_MonkeyBeamTransition_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_MonkeyBeamTransition::notify_BD1_MonkeyBeamTransition_C::get_TranistionType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_MonkeyBeamTransition::notify_BD1_MonkeyBeamTransition_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/AnimNotifies/notify_BD1_MonkeyBeamTransition.notify_BD1_MonkeyBeamTransition_C");
    return result;
}
bool _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_MonkeyBeamTransition::notify_BD1_MonkeyBeamTransition_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
