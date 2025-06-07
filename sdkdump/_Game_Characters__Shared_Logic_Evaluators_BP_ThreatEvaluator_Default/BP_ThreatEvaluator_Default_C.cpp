#include "..\FUObjectArray.hpp"
#include "BP_ThreatEvaluator_Default_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIThreatEvaluator_Default.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Logic_Evaluators_BP_ThreatEvaluator_Default::BP_ThreatEvaluator_Default_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Logic/Evaluators/BP_ThreatEvaluator_Default.BP_ThreatEvaluator_Default_C");
    return result;
}
