#include "..\FUObjectArray.hpp"
#include "INT_NarrativeSpeaker_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Interfaces_INT_NarrativeSpeaker::INT_NarrativeSpeaker_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interfaces/INT_NarrativeSpeaker.INT_NarrativeSpeaker_C");
    return result;
}
void _Game_Narrative_Interfaces_INT_NarrativeSpeaker::INT_NarrativeSpeaker_C::GetBossDefeatedText(void*& DefeatedText) {
    return;
}
void _Game_Narrative_Interfaces_INT_NarrativeSpeaker::INT_NarrativeSpeaker_C::GetCustomSubtitleName(void*& CustomSubtitleName) {
    return;
}
void _Game_Narrative_Interfaces_INT_NarrativeSpeaker::INT_NarrativeSpeaker_C::GetSpeakerTag(_Script_GameplayTags::GameplayTag& SpeakerTag) {
    return;
}
