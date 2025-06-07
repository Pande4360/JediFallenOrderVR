#include "..\FUObjectArray.hpp"
#include "BP_AIResourceSystem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResourceSystem.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Logic_Resources_BP_AIResourceSystem::BP_AIResourceSystem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Logic/Resources/BP_AIResourceSystem.BP_AIResourceSystem_C");
    return result;
}
