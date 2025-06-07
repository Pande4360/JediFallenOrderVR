#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterReactionDefinition.hpp"
#include "RsHeroStateInfo.hpp"
void* _Script_RsGameTechRT::RsHeroStateInfo::get_CameraModeName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_State() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_StateTag() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_MotionTweaks() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_RsGameTechRT::RsCharacterReactionDefinition*& _Script_RsGameTechRT::RsHeroStateInfo::get_ReactionDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterReactionDefinition**)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_CollisionTweaks() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_FlagSets() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_MovementMode() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsHeroStateInfo::get_AttributeTags() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroStateInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHeroStateInfo");
    return result;
}
