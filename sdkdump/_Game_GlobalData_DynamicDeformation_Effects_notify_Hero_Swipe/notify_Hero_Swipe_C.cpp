#include "..\FUObjectArray.hpp"
#include "notify_Hero_Swipe_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_DynamicDeformation_Effects_notify_Hero_Swipe::notify_Hero_Swipe_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/DynamicDeformation/Effects/notify_Hero_Swipe.notify_Hero_Swipe_C");
    return result;
}
bool _Game_GlobalData_DynamicDeformation_Effects_notify_Hero_Swipe::notify_Hero_Swipe_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
