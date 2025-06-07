#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterAwarenessReactionAnimations.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterAwarenessReactionAnimations::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterAwarenessReactionAnimations");
    return result;
}
void* _Script_RsGameTechRT::RsAICharacterAwarenessReactionAnimations::get_PrimaryAmbientToAlertReaction() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAICharacterAwarenessReactionAnimations::get_DefaultAmbientToAlertReaction() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsAICharacterAwarenessReactionAnimations::get_AlertToAmbientReaction() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsAICharacterAwarenessReactionAnimations::get_UnsheatheWeapon() {
    return (void*)((uintptr_t)this + 0x30);
}
