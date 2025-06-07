#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RAPDatabase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPDatabase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RAPDatabase");
    return result;
}
void* _Script_RsGameTechRT::RAPDatabase::get_Lines() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RAPDatabase::get_DialogueToGameplayTags() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_RsGameTechRT::RAPDatabase::get_DialogueMetadata() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::RAPDatabase::get_EventContextsForSpeakers() {
    return (void*)((uintptr_t)this + 0x120);
}
