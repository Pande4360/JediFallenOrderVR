#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "BAFTATagListToDialogue.hpp"
void* _Script_RsGameTechRT::BAFTATagListToDialogue::get_Tags() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::BAFTATagListToDialogue::get_UnsetTags() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_RsGameTechRT::BAFTATagListToDialogue::get_SpeakersHash() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_DialoguePlugin::Dialogue*& _Script_RsGameTechRT::BAFTATagListToDialogue::get_Dialogue() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTATagListToDialogue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.BAFTATagListToDialogue");
    return result;
}
int32_t& _Script_RsGameTechRT::BAFTATagListToDialogue::get_SpeakersCount() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
