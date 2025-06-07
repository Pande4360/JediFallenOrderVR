#include "..\FUObjectArray.hpp"
#include "BP_AIResource_ArcherStumbleShooting_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
_Script_CoreUObject::Class* _Game_Characters_Archer00_Logic_Resources_BP_AIResource_ArcherStumbleShooting::BP_AIResource_ArcherStumbleShooting_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Archer00/Logic/Resources/BP_AIResource_ArcherStumbleShooting.BP_AIResource_ArcherStumbleShooting_C");
    return result;
}
