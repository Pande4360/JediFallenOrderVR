#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "NarrativeEventResult.hpp"
#include "RsNarrativeBlueprintLibrary.hpp"
#include "RsNarrativeSystem.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNarrativeBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNarrativeBlueprintLibrary");
    return result;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeBlueprintLibrary::NarrativeEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_Engine::Actor* OptionalSpeaker, bool QueueIfFails) {
    return;
}
_Script_RsGameTechRT::RsNarrativeSystem* _Script_RsGameTechRT::RsNarrativeBlueprintLibrary::GetNarrativeSystem(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
