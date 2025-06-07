#include "..\FUObjectArray.hpp"
#include "notify_Shock_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_Shock::notify_Shock_C::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
void* _Game_GlobalData_AnimNotifies_notify_Shock::notify_Shock_C::get_Effect_Color() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_AkAudio::AkAudioEvent*& _Game_GlobalData_AnimNotifies_notify_Shock::notify_Shock_C::get_SFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_Shock::notify_Shock_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_Shock.notify_Shock_C");
    return result;
}
