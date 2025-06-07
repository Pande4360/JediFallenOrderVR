#include "..\FUObjectArray.hpp"
#include "notify_Echo_Acquire_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_Echo_Acquire::notify_Echo_Acquire_C::get_Location_Offset() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Game_GlobalData_AnimNotifies_notify_Echo_Acquire::notify_Echo_Acquire_C::get_Bone_Name() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_AkAudio::AkAudioEvent*& _Game_GlobalData_AnimNotifies_notify_Echo_Acquire::notify_Echo_Acquire_C::get_SFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x80);
}
void* _Game_GlobalData_AnimNotifies_notify_Echo_Acquire::notify_Echo_Acquire_C::get_Rotation_Offset() {
    return (void*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_Echo_Acquire::notify_Echo_Acquire_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_Echo_Acquire.notify_Echo_Acquire_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_Echo_Acquire::notify_Echo_Acquire_C::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
