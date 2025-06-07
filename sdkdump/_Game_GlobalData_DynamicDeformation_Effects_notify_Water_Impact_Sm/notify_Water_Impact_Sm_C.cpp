#include "..\FUObjectArray.hpp"
#include "notify_Water_Impact_Sm_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_DynamicDeformation_Effects_notify_Water_Impact_Sm::notify_Water_Impact_Sm_C::get_Bone_Name() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Game_GlobalData_DynamicDeformation_Effects_notify_Water_Impact_Sm::notify_Water_Impact_Sm_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/DynamicDeformation/Effects/notify_Water_Impact_Sm.notify_Water_Impact_Sm_C");
    return result;
}
bool _Game_GlobalData_DynamicDeformation_Effects_notify_Water_Impact_Sm::notify_Water_Impact_Sm_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
