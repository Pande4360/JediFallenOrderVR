#include "..\FUObjectArray.hpp"
#include "BP_AIResource_Croak_Jump_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
_Script_CoreUObject::Class* _Game_Characters_Chomper_Logic_Misc_BP_AIResource_Croak_Jump::BP_AIResource_Croak_Jump_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Chomper/Logic/Misc/BP_AIResource_Croak_Jump.BP_AIResource_Croak_Jump_C");
    return result;
}
